#include "main.h"

/**
 * *_strpbrk - locates the first occurrence in the string s
 *
 * @s: pointer to string
 * @accept: pointer to bytes
 *
 * Return: 0 success
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
