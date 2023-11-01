#include "main.h"

/**
 * argstostr - Concatenates all the program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the newly allocated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *concatenated;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated = (char *)malloc(total_length * sizeof(char) + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[pos++] = av[i][j];
		}
		concatenated[pos++] = '\n';
	}

	concatenated[pos] = '\0';

	return (concatenated);
}
