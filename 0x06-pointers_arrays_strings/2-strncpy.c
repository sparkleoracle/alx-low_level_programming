#include "main.h"

/**
  * _strncpy - The main name function of the code string copies
  *
  * @src: first Function parameter
  *
  * @dest: second Function parameter
  *
  * @n: third Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while  (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
	}
