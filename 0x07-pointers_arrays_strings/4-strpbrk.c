#include "main.h"

/**
  * _strpbrk - function of the prototype finds the occurrence of the substring
  * needle in the string haystack The terminating (\0) are not compared
  *
  * @s: function parameter for string to search
  *
  * @accept: Fuunction parameter that look string containing the bytes
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}
