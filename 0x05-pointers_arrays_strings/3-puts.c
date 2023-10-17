#include "main.h"

/**
 * _puts - prints string followed by new line
 *
 * @str: string parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

