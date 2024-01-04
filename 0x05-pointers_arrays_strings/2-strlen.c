#include "main.h"

/**
 * _strlen - the function name that rturn the length of the string
 * @s: the function parameter
 * Return: the length of the sring
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);

}
