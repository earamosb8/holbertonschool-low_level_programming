#include <stdlib.h>
/**
 * _strdup---create a array
 * @str: "holberton"
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int size = 0, b;
	char *nstring;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	size++;

	nstring = malloc(sizeof(char) * size);
	if (nstring == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size ; b++)
	{
		nstring[b] = str[b];
	}

	return (nstring);
}


