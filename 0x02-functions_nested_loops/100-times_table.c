#include "main.h"

/**
 * print_times_table: print the times table of n number more than 0 less than 15
 *
 * @n: takes number input
 */

void print_times_table(int n)
{
	int num, mul, prd;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				prd = num * mul;

				if (prd <= 9)
					_putchar(' ');
				if (prd <= 99)
					_putchar(' ');

				if (prd >= 100)
				{
					_putchar((prd / 100) + 48);
					_putchar((prd / 10) % 10 + 48);
				}
				else if (prd <= 99 && prd >= 10)
					_putchar((prd % 10) + 48);
				_putchar((prd % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

