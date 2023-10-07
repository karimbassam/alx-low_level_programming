#include <stdio.h>
/**
 * main - start
 *
 * Description: prints lphabet lower without q & e using putchar
 *
 * Return: 0 success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
