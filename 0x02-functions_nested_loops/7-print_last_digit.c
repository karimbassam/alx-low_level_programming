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

	lastDigit = n % 10;
	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}
	else
	{
		lastDigit = lastDigit;;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
