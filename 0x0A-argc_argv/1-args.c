#include <stdio.h>
#include "main.h"

/**
 * main - the main functions that
 * print the number of arguments passed to the program
 * @argc: parameter for number of arguments
 * @argv: paramater array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
