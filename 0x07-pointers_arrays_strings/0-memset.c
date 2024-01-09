#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * to by s with the constant of byte b
 * @s: first parameter of s
 * @b: second parameter of the b
 * @n: third and the last parameters to be n
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);


}
