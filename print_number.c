#include "main.h"

/**
 * print_num - prints input number
 * @args: arguments
 * Return: no of arguments printed
 */
int print_num(va_list args)
{
	int n;
	int d;
	int size;
	unsigned int num;

	n  = va_arg(args, int);
	d = 1;
	size = 0;

	if (n < 0) /*negative numbers by joan*/
	{
		size = size +  put_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / d > 9;) /*two digit numbers*/
	{
		d = d * 10;
	}

	for (; d != 0; ) /*non-zero*/
	{
		size = size +  put_char('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (size); /*return the length*/
}

/**
 * print_int - prints integer
 * @list: input
 * Return: length of input
 */
int print_int(va_list list)
{
	int num;

	num = print_num(list);
	return (num);
}
