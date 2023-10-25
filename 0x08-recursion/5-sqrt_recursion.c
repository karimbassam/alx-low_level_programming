#include "main.h"

/**
 * _sqrt_recursion - find square root
 * square - helper function
 * @n: integer to find root for
 * @sqr: square root
 *
 * Return: square root
 */

int square(int n, int sqr);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helper function
 * @n: integer to find root for
 * @sqr: square root
 *
 * Return: square root
 */
int square(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square(n, sqr + 1));
	else
		return (-1);
}
