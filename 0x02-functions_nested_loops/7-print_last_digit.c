#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 *
 * @n: number checked
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = n % 10;
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
