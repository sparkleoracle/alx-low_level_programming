#include "main.h"

/**
  * _strspn - function of the that printthe length of a prefix substring
  *
  * @s: Function parameter of string to evaluate
  *
  * @accept: parameter of string containing the list of characters with s
  *
  * Return: Always 0.
  */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
