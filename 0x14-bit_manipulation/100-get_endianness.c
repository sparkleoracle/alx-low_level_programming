#include "main.h"

/**
 * get_endianness - the function checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int c;
	char *d;

	c = 1;
	d = (char *)&c;
	return (*d);
}
