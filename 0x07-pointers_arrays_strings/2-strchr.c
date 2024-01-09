#include "main.h"

/**
  * _strchr - main function that locates a character in a string
  *
  * @s: Function parameter for string search
  *
  * @c: Function parameter char that find
  *
  * Return: Always c
  * or NULL if the character is not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
