#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: the functio parameter
 * Return: if its uppercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
