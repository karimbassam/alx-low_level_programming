#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - checks the condition of prime number using recursion
 *
 * @n: number to check
 * @div: divisor tested
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
