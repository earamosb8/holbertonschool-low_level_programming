#include "holberton.h"
/**
 * jack_bauer - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int a, b, x, y, c, d;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{

			x = a / 10;
			y = a % 10;
			c = b / 10;
			d = b % 10;
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');

		}
	}
}
