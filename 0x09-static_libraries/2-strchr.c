#include "main.h"
/**
 * _strchr - function that locates a character in a string,
 * @s: string parameter.
 * @c: character paramter .
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);


}
