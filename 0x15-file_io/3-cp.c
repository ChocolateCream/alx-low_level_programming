#include "main.h"
#include <stdio.h>


/**
 * main - The main program, should run it as cp file_from file_to
 * @argc: An int for the number of arguments
 * @argv: A pointer to the arguments
 *
 * Return: An int for the status code
 */

int main(int argc, char *argv[])
{
	int file_desc_read, file_desc_write, close_code_read, close_code_write;
	char *buffer;
	ssize_t n_bytes_read, n_bytes_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(1024);
	if (!buffer)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	file_desc_read = open(argv[1], O_RDONLY);
	n_bytes_read = read(file_desc_read, buffer, 1024);
	if ((file_desc_read < 0) || (n_bytes_read < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_desc_write = open(argv[2], O_RDWR | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	n_bytes_write = write(file_desc_write, buffer, 1024);
	if ((file_desc_write < 0) || (n_bytes_write < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (read(file_desc_read, buffer, 1024) > 0)
	{
		write(file_desc_write, buffer, 1024);
	}

	close_code_read = close(file_desc_read);
	if (close_code_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_read);
		exit(100);
	}

	close_code_write = close(file_desc_write);
	if (close_code_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_code_write);
		exit(100);
	}

	return (0);
}
