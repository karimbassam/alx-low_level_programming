#include <stdio.h>
#include <unistd.h>
/**
 * main - is the start of the program
 *
 * Description: print a qoute using the write(); function
 *
 * Return: 1 means successful termination
 */

int main(void)
{
	char qout[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qout, 59);
	return (1);
}
