#include "main.h"
/**
 * _isalpha - function that Check if character is a alphabet character.
 * @c: type int character to be checked
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
