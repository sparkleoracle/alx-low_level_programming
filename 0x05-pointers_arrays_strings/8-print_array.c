#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a:first parameter of array of element
 * @n: second parameter the number of elements of the array at *a.
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
		printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
printf("\n");
}
