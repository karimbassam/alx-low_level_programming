#include "main.h"
#include <stdio.h>

/**
 * isLower - determines if lower case
 *
 * @c: characters parameter
 *
 * Return: 1 if true 0 otherwise
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * is_symbol - determines if symbol
 *
 * @c: character
 *
 * Return: 1 if true 0 otherwise
 */

int is_symbol(char c)
{
	int i;
	char symbol[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == symbol[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes the string
 *
 * @s: string parameter
 *
 * Return: ptr
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int found = 1;

	while (*s)
	{
		if (is_symbol(*s))
			found = 1;
		else if (isLower(*s) && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;
	}

	return (ptr);
}
