#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a textfile and prints it to stdout
 *
 * @filename: name of file to print
 * @letters: letters to print
 *
 * Return: Null on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	int r, c;
	char *text;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename,  O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (-1);
	}

	r = read(fd, text, letters);
	if (r == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, text, r);
	c = close(fd);
	if (c == -1)
	{
		return (0);
	}
	return (r);
}
