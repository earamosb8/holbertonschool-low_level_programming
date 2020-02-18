#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
char de;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;


	for (b = 0; b <= a; a--, b++)
	{
		de = s[b];
		s[b] = s[a];
		s[a] = de;

	}

}
