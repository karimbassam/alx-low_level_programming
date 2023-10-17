#include "main.h"

/**
 * _strlen - calculates the length of any string
 *
 * @s: the srting vairiable
 *
 * Return: 0 success
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}

