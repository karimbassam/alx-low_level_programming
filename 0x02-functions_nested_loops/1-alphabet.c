#include "main.h"

/**
 * print_alphabet - prints lower case alphabet using putchar();
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
