#include <stdio.h>
/**
  * main - the function that prints the name of the file it was compiled from
  * @void: accepts nothing
  * Return: 0 on success
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
