#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - writes the character c to stdout
 * @str:---------------
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{

int a = 0, c;
int b = strlen(str);

	while (a <= b)
	{
	c = a % 2;
	if (c == 0)
	{
		_putchar(str[a]);
	}

		a++;
	}

		_putchar('\n');

}
