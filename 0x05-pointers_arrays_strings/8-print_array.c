#include "main.h"

/**
 * print_array - the function name string
 * function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
if (i != (n - 1))
{
		printf(",");
}
}
	printf("\n");
}
