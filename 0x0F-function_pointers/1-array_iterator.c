#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: The function to be executed on each element
 *
 * Description: This function takes an array, its size, and a function pointer
 * to an action function. It then applies the action function to each element
 * of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
