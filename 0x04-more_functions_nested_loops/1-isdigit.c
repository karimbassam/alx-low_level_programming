#include "main.h"

/**
 * _isdigit - checks digit between 0 and 9
 *
 * @c: the input
 *
 * Return: 1 if digit exists and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
