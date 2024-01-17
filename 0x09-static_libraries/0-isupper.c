#include "main.h"

/**
 * _isupper -function that print all alphabert on uppercase
 * @c: parameter to check
 *
 * Return: if uppercase return 1 else return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);

return (0);
}
