#include "main.h"
#include <stdio.h>


/**
 * create_file - Creates a file on disc with the proper permissions.
 * @filename: String with the file name.
 * @text_content: The text to be added to the file.
 *
 * Return: An number representing the status.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, creat_status, len_text;
	ssize_t n_bytes_write;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		creat_status = creat(filename, O_RDWR | O_TRUNC | S_IRUSR | S_IWUSR);
		if (creat_status < 0)
			return (-1);
		return (1);
	}

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc < 0)
		return (-1);

	len_text = 0;
	while (text_content[len_text] != '\0')
		len_text++;

	n_bytes_write = write(file_desc, text_content, len_text);
	if (n_bytes_write < 0)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}
