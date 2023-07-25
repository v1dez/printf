#include "main.h"

/**
 * put_char - writes input character to stdout
 * @ch: input character
 * Return:  1, on success
 * -1 if error, and errno is set
 */
int put_char(char ch)
{
	return (write(1, &ch, 1));
}
