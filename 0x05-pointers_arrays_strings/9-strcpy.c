#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{

	int a=0, i=0;

	while (src[a] != '\0')
	{
		a++;
	}

	a--;

	while( i <= a)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

