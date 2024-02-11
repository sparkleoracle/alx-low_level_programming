#include"main.h"

/**
 * get_bit - func that returns the value of a bit at a given index.
 * prog returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisors, checks;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisors = 1 << index;
	checks = n & divisors;
	if (checks == divisors)
		return (1);
	return (0);
}
