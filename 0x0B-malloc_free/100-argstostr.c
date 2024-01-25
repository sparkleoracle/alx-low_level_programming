#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int input parameter
 * @av: double pointer array parameter
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, k, l = 0, y = 0;
	char *rtp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			y++;
	}
	y += ac;
	rtp = malloc(sizeof(char) * y + 1);
	if (rtp == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (k = 0; av[j][k]; k++)
	{
		rtp[l] = av[j][k];
		l++;
	}
	if (rtp[l] == '\0')
	{
		rtp[l++] = '\n';
	}
	}
	return (rtp);
}
