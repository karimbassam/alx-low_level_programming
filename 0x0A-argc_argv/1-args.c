#include <stdio.h>

/**
 * main - print number of arguments
 *
 * @argc: number of command line arguments
 * @argv: pointer to array
 *
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
