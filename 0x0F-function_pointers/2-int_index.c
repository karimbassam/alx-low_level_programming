#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: The comparison function to be used
 *
 * Return: Index of the first element for which cmp doesn't return 0,
 *         -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
