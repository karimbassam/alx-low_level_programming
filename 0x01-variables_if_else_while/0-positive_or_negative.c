#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the start of the program
 *
 * Description: this is a program that prints the sign of random number
 *
 * Return: 0 means success termination
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
