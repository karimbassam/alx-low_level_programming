#include "main.h"

/**
 * _pow_recursion - returns value to the power of another value
 *
 * @x: base parameter
 * @y: exponant parameter
 *
 * Return: calls the same function again
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
