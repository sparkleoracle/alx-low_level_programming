#include "main.h"

/**
 * set_bit - funct that sets the value of a bit to 1 at a given index.
 * where index is the index, starting from 0 of the bit you want to set
 * this program sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bit = 1 << index;
	*n = *n | set_bit;
	return (1);
}
