#include "main.h"


/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: String with the file name.
 * @letters: The number of characters to read and print.
 *
 * Return: An number representing the status.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t n_bytes_read, n_bytes_write;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 3)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	n_bytes_read = read(file_desc, buffer, letters);
	close(file_desc);
	if (n_bytes_read < 0)
	{
		free(buffer);
		return (0);
	}


	n_bytes_write = write(STDOUT_FILENO, buffer, n_bytes_read);
	if ((n_bytes_write < 0) || (n_bytes_read != n_bytes_write))
	{
		free(buffer);
		return (0);
	}

	return (n_bytes_write);
}
