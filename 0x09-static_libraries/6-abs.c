#include "main.h"

/**
 * _abs - prints the absolute valus of given number
 *
 * @n: number checked by function
 *
 * Return: n success
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
