#include "main.h"

/**
 * print_rev - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_rev(va_list arg)
{
	int len;
	char *s;
	char *p;

	s = va_arg(arg, char *);
	if (s == NULL)
		return (-1);
	p = rev_str(s);
	if (p == NULL)
		return (-1);
	for (len = 0; p[len] != '\0'; len++)
		put_char(p[len]);
	free(p);
	return (len);
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int rot13(va_list list)
{
	int i;
	int j;
	char *str;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);

	if (str == NULL)
		return (-1);

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '0'; j++)
		{
			if (str[i] == x[j])
			{
				put_char(y[j]);
				break;
			}
		}
		if (j == 53)
			put_char(str[i]);
	}
	return (i);
}
