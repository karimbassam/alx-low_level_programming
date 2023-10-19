#include "main.h"

/**
 * string_toupper - changes lowercase chars to uppercase in a string
 *
 * @str: pointer to string changed
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
