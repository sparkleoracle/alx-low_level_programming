#include <stdio.h>
#include "main.h"
/**
 * _atoi - main function that converts a string to an integer
 * @s: parameter for string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, b, m, len, h, digit;

	j = 0;
	b = 0;
	m = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && h == 0)
	{
		if (s[j] == '-')
			++b;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (b % 2)
				digit = -digit;
			m = m * 10 + digit;
			h = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			h = 0;
		}
		j++;
	}
	if (h == 0)
		return (0);
	return (m);
}
/**
 * main - multiplies two numbers
 * @argc: parameter for number of arguments
 * @argv: parameter for array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
