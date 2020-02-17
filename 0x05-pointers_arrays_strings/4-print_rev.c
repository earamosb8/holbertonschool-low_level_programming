#include "holberton.h"
/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		--i;
		_putchar (s[i]);
	}
	_putchar ('\n');
}
