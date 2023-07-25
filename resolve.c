#include "main.h"

/**
 * resolve - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: input string storing characters.
 * @f_list: list of all functions
 * @arg_list: A list containing argumentents to be passed
 * Return: number of characters printed
 */
int resolve(const char *format, conver_t f_list[], va_list arg_list)
{
	int a, j, output;

	output = 0;
	for (a = 0; format[a] != '\0'; a++)/* Iterates through the main str*/
	{
		if (format[a] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[a + 1] == f_list[j].sym[0])
				{

				output = f_list[j].f(arg_list);
				if (output == -1)
					return (-1);
				output += output;
				break;
				}
				
			}
			if (f_list[j].sym == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] == '\0')
				{
					return (-1);
				}
				else
				{
					put_char(format[a]);
					put_char(format[a + 1]);
					output = output + 2;
				}
	
			}
			a = a + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			put_char(format[a]); /*call the write function*/
			output++;
		}
	}
	return (output);
}
