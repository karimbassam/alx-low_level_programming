#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */

char **strtow(char *str)
{
	int i, j, k, len = 0, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0' && word_count > 0)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (len = 0, k = i; str[k] != ' ' && str[k] != '\0'; k++, len++)
				;

			words[word_count - 1] = (char *)malloc((len + 1) * sizeof(char));
			if (words[word_count - 1] == NULL)
			{
				for (j = word_count; j <= i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
				words[word_count - 1][j] = str[i];
			words[word_count - 1][j] = '\0';
			word_count--;
		}
		else
			i++;
	}

	words[word_count] = NULL;

	return (words);
}
