#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: kkdfkdkfdk
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{

	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (dest + '\0');
}

