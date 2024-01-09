#include "main.h"

/**
  * _strstr - fuction that finds the occurrence of the substring needle
  *
  * @needle: function parameter string to search in
  *
  * @haystack: function parameter substring to look for
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}
