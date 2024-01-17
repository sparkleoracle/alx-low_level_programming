#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string input.
 * @needle: substring input parameter.
 * Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *d = needle;

		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}
		if (*c != '\0')
			return (haystack);
	}
	return (0);

}
