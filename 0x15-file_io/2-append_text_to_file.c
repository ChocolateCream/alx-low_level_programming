#include "main.h"


/**
 * append_text_to_file - Creates a file on disk with the proper permissions.
 * @filename: String with the file name.
 * @text_content: The text to be added to the file.
 *
 * Return: An number representing the status.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, len_text;
	ssize_t n_bytes_write;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_RDWR | O_APPEND);
	if (file_desc < 0)
		return (-1);

	if (text_content != NULL)
	{
		len_text = 0;
		while (text_content[len_text] != '\0')
			len_text++;
	}

	n_bytes_write = write(file_desc, text_content, len_text);
	if (n_bytes_write < 0)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}
