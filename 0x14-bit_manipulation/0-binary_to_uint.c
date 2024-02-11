#include "main.h"

/**
 * binary_to_uint - the function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num += 1;
	}
	return (num);
}
