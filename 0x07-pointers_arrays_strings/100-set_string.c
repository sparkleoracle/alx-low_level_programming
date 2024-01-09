#include "main.h"

/**
  * set_string - main function that sets the value of a pointer to a char
  *
  * @s: Function parameter of pointer to pointer that need to set to
  *
  * @to: Function parameter of string that to set
  *
  * Return: Always 0.
  */
void set_string(char **s, char *to)

{
	*s = to;

}
