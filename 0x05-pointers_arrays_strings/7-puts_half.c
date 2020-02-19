#include <stdio.h>
#include "holberton.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{

	int a = 0, c, n;

	while (str[a] != '\0')
	{
		a++;

	}
	c = a % 2;
	if (c == 0)
	{
		n = a / 2;

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}

	}
	else if
	(c != 0)
	{
		n = (a - 1) / 2;

		while (str[n] != '\0')
		{
		n++;
		_putchar(str[n]);

		}
	_putchar('\n');
}
}
