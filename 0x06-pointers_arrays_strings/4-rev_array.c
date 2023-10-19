#include "main.h"

/**
 * reverse_array - reverses contents of integer array
 *
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void type
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
