#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes,
 *         return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0); /* Error opening file */

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0); /* Memory allocation error */
	}

	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0); /* Error reading file */
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0); /* Error writing to standard output */

	return (bytesRead);
}
