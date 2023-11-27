#include "main.h"

/**
 * _strlen -returns the length of string
 * @s: the string to check length
 *
 * Return: integer of string length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1); /* Error creating or opening file */

	if (len)
		bytes = write(fd, text_content, len);
	close(fd);

	if (bytes == len)
		return (1);
	else
		return (-1);
}
