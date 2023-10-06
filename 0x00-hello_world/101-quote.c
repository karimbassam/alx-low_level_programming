#include <stdio.h>
#include <unistd.h>
/**
 * main - is the start of the program
 * Return: 1 means successful termination
 */
int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, qoute, 59);

	return (0);
}
