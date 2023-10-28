#include "main.h"

/**
 * _strncat - concatinates two strings
 *
 * @dest: pointer to string destination
 * @src: pointer to string input
 * @n: variable to outmost numbers
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
