#include <stdio.h>
#include "main.h"

/**
 * main - the amin function to  prints the name of the program
 * @argc: number of arguments parameter
 * @argv: array of arguments parameter
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
