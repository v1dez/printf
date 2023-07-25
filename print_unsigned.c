#include "main.h"

/**
 * print_un_num - ....
 * @n: ....
 * Return: .....
 */
int print_un_num(unsigned int n)
{
	int tens;
	int len;
	unsigned int num;

	num = n;

	tens = 1;/*assist with number greater that ten*/
	len = 0;

	for (; num / tens > 9 ; )
	{
		tens *= 10;
	}


	for (; tens != 0; ) /*by joan and justin*/
	{
		len += put_char('0' + num / tens);
		num %= tens;
		tens /= 10;
	}
	return (len);
}

/**
 * un_int - ....
 * @list: ....
 * Return: ....
 */
int un_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_un_num(num));

	if (num < 1)
		return (-1);
	return (print_un_num(num));
}
