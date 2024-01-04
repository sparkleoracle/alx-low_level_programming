#include "main.h"

/**
  * _strcmp - The main function of C standard library
  * declared in string. h that compares two C strings
  *  function that compares two strings
  *
  * @s1: first Function parameter
  *
  * @s2: second Function parameter
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int k = 0;

while (s1[k] != '\0' && s2[k] != '\0')
{
	if (s1[k] != s2[k])
	{
	return (s1[k] - s2[k]);
	}
	k++;
	}
	return (0);
}
