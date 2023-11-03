#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - Checks if a string is composed of digits.
 * @str: The string to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	int i, j, carry, product;
	int *result = calloc(len_result, sizeof(int));

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i + j + 1] = carry;
	}

	for (i = 0; i < len_result; i++)
	{
		if (result[i] != 0 || i == len_result - 1)
		{
			for (j = i; j < len_result; j++)
				printf("%d", result[j]);
			printf("\n");
			break;
		}
	}

	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
