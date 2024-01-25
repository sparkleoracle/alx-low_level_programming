#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the main function function that concatenates two strings.
 * @width: width input parameter
 * @height: height input parameter
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dee;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);
	dee = malloc(sizeof(int *) * height);
	if (dee == NULL)
		return (NULL);
	for (s = 0; s < height; s++)
	{
		dee[s] = malloc(sizeof(int) * width);
		if (dee[s] == NULL)
		{
			for (; s >= 0; s--)
				free(dee[s]);
			free(dee);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
			dee[s][t] = 0;
	}
	return (dee);
}
