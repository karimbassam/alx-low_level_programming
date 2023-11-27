#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, close_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* Error creating or opening file */

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, sizeof(char));
		close_status = close(fd);

		if (written_bytes == -1 || close_status == -1)
			return (-1); /* Error writing to or closing file */
	}
	else
	{
		close_status = close(fd);
		if (close_status == -1)
			return (-1); /* Error closing file */
	}

	return (1);
}
