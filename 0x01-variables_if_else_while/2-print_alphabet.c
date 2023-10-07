#include <stdio.h>
/**
 * main - start of the program
 *
 * Description: This prgram print the alphabet in lower case using putchar();
 *
 * Return: 0 means successful termination
 */

int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar("\n");

	return (0);
}
