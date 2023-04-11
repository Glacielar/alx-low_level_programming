#include "main.h"

/**
 * create_file - function that create files
 * @filename: file to be created
 * @text_content: a pointer to the string to write to the file
 *
 * Return: 1 on success
 * otherwise -1 on failure (if file can't be created, written)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
