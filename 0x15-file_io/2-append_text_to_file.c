#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: info to write in the file
 * Return: 1 in success, -1 in error.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int file = 0;
	int r = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		r = write(file, text_content, i);

	}
	if (r == -1)
	{
		return (0);
	}
	return (1);
}

