#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file
 * @text-content: string to add at end of file
 *
 * Return: -1 if function fails or filename is NULL
 * --1 if file doesn't exist and user lacks write permissions
 *  Otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
