#include "main.h"

/**
 * factorial - finds factorial of number
 *
 * @n: integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
