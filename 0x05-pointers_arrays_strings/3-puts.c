#include "main.h"

/**
 * _puts - the function name
 * that print a string follow by the new line
 * @str: the function parameter
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');
}
