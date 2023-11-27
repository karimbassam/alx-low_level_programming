#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes, close_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* Error opening file for append */

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
