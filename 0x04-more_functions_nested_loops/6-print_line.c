#include "main.h"

/**
 * print_line - prints a staright line in the terminal
 *
 * @n: number of times the character should be printed
 */

void print_line(int n)
{
	int ch_len;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch_len = 1; ch_len <= n; ch_len++)
			_putchar('_');
		_putchar('\n');
	}
}
