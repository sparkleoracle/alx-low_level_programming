#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x)(void)(x)
/**
 * main - adds two numbers
 * @argc:int
 * @argv:array of strings
 * Return: sum if all digits
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int d;
	int num;
	char *p;

	num = 0;
	d = 0;

	a = 1;
	while (a < argc)
	{
		p = argv[a];
		b = 0;
		while (p[b] != '\0')
		{
			if (p[b] < '0' || p[b] > '9')
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		a++;
	}

	for (a = 1; a < argc; a++)
	{
		d = atoi(argv[a]);
		num = num + d;
	}
	printf("%d\n", num);
	return (0);
}
