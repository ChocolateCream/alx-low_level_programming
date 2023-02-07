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
	int file_desc_read, file_desc_write, buffer_size;
	char *buffer;
	ssize_t n_bytes_read, n_bytes_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_size = 1024;
	buffer = malloc(buffer_size);
	if (!buffer)
	{
		exit(1);
	}

	file_desc_read = open(argv[1], O_RDONLY);
	if (file_desc_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_desc_read);
		exit(98);
	}

	file_desc_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_desc_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_desc_write);
		exit(99);
	}

	n_bytes_read = read(file_desc_read, buffer, buffer_size);
	if (n_bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(file_desc_read);
		exit(98);
	}

	n_bytes_write = write(file_desc_write, buffer, buffer_size);
	if (n_bytes_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(file_desc_write);
		exit(99);
	}

	buffer = malloc(buffer_size);
	while ((read(file_desc_read, buffer, buffer_size)) > 0)
	{
		write(file_desc_write, buffer, buffer_size);
		buffer = malloc(buffer_size);
	}

	if (close(file_desc_read) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_read);
		exit(100);
	}

	if (close(file_desc_write) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_write);
		exit(100);
	}

	free(buffer);
	return (0);
}
