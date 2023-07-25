#include "main.h"
/**
 * print_char - prints character
 * @list: arguments
 * Return: no of characters printed.
 */
int print_char(va_list list)
{
	put_char(va_arg(list, int));
	return (1);
}

/**
 * print_str - prints a string
 * @list: arguments
 * Return: no characters printed.
 */
int print_str(va_list list)
{
	int j;
	char *s;

	j = 0;

	s = va_arg(list, char *);

	if (!s)
		s = "(null)";
	while (s[j] != '\0')
	{
		put_char(s[j]);
		j++;
	}

	return (j);
}

/**
 * print_percent - prints percent symbol
 * @list: arguments
 * Return: no of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	put_char('%');
	return (1);
}

