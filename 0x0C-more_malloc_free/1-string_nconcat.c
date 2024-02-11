#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string parameter
 * @s2: second String to add to end of s1 paramter
 * @n: Amount of the two string s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empt;
	unsigned int a, len, b;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*nstr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	a = 0;
	while (a < size && s1[a] != '\0')
	{
		nstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (a < size && s2[b] != '\0')
	{
		nstr[a] = s2[b];
		a++;
		b++;
	}
	nstr[a] = '\0';
	return (nstr);
}
