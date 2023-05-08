#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and print to STDOUT
 * @filename: text file being read
 * @letter: no of letters to be read
 *
 * Return: m, number of bytes read and printed
 * otherwise 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t m;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) *letters);
	b = read(fd, buffer, letters);
	m = write(STDOUT_FILENO, buffer, b);

	free(buffer);
	close(fd);
	return (m);
}
