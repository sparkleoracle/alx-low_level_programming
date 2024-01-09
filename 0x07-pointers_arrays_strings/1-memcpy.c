#include "main.h"

/**
  * _memcpy - main function of copies memory
  * @dest: destination memory area parameter
  * @src: parameter of the memory area to copy from
  * @n: function number of bytes to copy
  * Return: Always dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
