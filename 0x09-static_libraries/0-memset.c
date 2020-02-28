#include "holberton.h"
/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: dsfsdf
 * @n:sdfsdfsf
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, c = n;

	for (i = 0; i < c; i++)
	{
		s[i] = b;

	}
	return (s);

}

