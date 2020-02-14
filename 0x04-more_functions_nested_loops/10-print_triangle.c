#include "holberton.h"
/**
 * print_triangle - writes the character c to stdout
 * @size: ____
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int a, b, c, d, e;

	d = size - 1;
	e = 1;
	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= d; b++)
			{
			_putchar(' ');
			}

			for (c = 0; c < e; c++)
			{
			_putchar('#');
			}
		d = d - 1;
		e = e + 1;
		_putchar('\n');
		}

	}

}
