#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - the main function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2 dimension grid parameter
 * @height: height dimension of grid parameter
 * Description: frees memory of grid parameter
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
