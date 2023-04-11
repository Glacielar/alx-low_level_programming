#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buf(char *content);
void close_file(int fd);

/**
 * create_buf - allocates 1024 bytes for a buffer
 * @content: name of file buffer is storing chars
 *
 * Return: pointer to newly allocated buffer
 */

char *create_buf(char *content)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", content);
		exit(99);
	}

	return (buf);

}

/**
 * close_file - closes file descriptors
 * @fd: file descriptor to be cclosed
 *
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close 
				fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to program
 *
 * Return: 0 on success
 *
 * Description: If argument code is incorrect, exit code 97
 * if file doesn't exist or can't be read, exit code 98
 * if file_to can't be created or written to, exit coode 99
 * if file_to or file_from can't be closed, exit code 100
 */

int main(int arg, char *argv[])
{
	int d,b,r,w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp_file
				from file_to\n");
		exit (97);
	}

	buffer = create_buffer(argv[2]);
	d = open(argv[1], O_RDONLY);
	r = read(d, buffer, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read
					from file &s\n", argv[1]);
	        	free = buffer;
			exit(98);
		}

		w = write(b, buffer, r);
		if (b == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to
					%s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(d, buffer, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);

	}
	while (r > 0)

	free(buffer);
	close_file(d);
        close_file(b);

	return (0);
}
