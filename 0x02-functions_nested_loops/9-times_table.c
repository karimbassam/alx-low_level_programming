#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 */

void times_table(void)
{
	int num, mul, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar('.');
			_putchar(' ');

			prd = num * mul;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			 */
			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + 48);
			_putchar((prd % 10) + 48);
		}
		_putchar('\n');
	}
}
