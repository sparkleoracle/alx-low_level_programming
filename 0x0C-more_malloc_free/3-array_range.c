#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - the function that create a memory array for integers
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *let_ptr;
	int let_arr;

	if (min > max)
	{
		return (NULL);
	}

	let_ptr = malloc(sizeof(int) * (max - min + 1));
	if (let_ptr == NULL)
	{
		return (NULL);
	}
	let_arr = 0;
	while (min <= max)
	{
		let_ptr[let_arr] = min;
		min++;
		let_arr++;
	}
	return (let_ptr);
}
