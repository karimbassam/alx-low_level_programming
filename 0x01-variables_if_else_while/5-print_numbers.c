#include <stdio.h>
/**
 * main - start
 *
 * Description: pritn all single digit numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");

	return (0);
}
