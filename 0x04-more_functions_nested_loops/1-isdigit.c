#include "main.h"
/**
 * _isdigit - checks for more digits
 * @c: functions parameters tha will be checked
 * Return: 1 on success
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
