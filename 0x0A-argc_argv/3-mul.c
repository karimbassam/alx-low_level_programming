#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of two numbers
 *
 * @argc: number of command line arguments
 * @argv: pointer to position of command line arguments
 *
 * Return: 0 success
 */

int main(int argc, hcar *argv[])
{
	int sum;

	if (argc == 1)
	{
		sum = atoi(argv[1] * atoi(argv[2]));
		print("%d\n", sum);
	}
	else
	{
		print("Error\n");
		return(1);
	}

	return (0);
}
