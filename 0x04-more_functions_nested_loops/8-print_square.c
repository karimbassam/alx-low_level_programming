#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: size of the square
 *
 * Return: 0 success
 */

void print_square(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
