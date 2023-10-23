#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer to constant of type char
 * @b: constant char
 * @n: frist number of bytes filled by the function
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}
