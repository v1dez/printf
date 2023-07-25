#include "main.h"

/**
 * rev_str - Reverse a string
 * @s: Pointer to the string to be reversed
 * Return: Pointer to the reversed string
 */
char *rev_str(char *s)
{
	int head;
	int tail;
	char model;
	char *ptr;
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	tail = size - 1;

	_memcpy(ptr, s, size);

	head = 0;
	for (; head < size; head++, size--)
	{
		model = ptr[tail];
		ptr[tail] = ptr[head];
		ptr[head] = model;
	}
	return (ptr);
}

/**
 * write_base - Write a string to the standard output
 * @str: the string
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		put_char(str[i]);
}

/**
 * base_len - length of a number in a given base
 * @num: number.
 * @base: the base
 * Return: length of the number in the given base
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int j;

	j = 0;

	for (; num > 0; j++)
	{
		num = num / base;
	}
	return (j);
}

/**
 * _memcpy - Copy memory from source to destination
 * @dest: the  destination
 * @str: source pointer
 * @n: number of bytes
 * Return: Always success
 */
char *_memcpy(char *dest, char *str, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *str;
		str++;
		dest++;
	}
	return (start);
}
