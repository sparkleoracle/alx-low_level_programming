#include "main.h"

/**
 * _memset - main function that fills memory with a constant byte
 * @s: starting address of teh momory
 * @b: parameter for the desired value
 * @n: parameter for the number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
