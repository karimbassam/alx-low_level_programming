#include <stdio.h>

/**
 * main - start
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int firstDigit1 = i / 10;
			int secondDigit1 = i % 10;
			int firstDigit2 = j / 10;
			int secondDigit2 = j % 10;

			putchar(firstDigit1 + '0');
			putchar(secondDigit1 + '0');
			putchar(' ');
			putchar(firstDigit2 + '0');
			putchar(secondDigit2 + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
