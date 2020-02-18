#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i = 0, b;

	while (s[i] != '\0')
	{
		i++;
	}

	char pus[i-1];
	for (b = 0; b <= i; b++)
	{
		pus[b] = s[b];
	}
}

