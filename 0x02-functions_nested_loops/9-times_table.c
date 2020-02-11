#include "holberton.h"
/**
 * times_table - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a, c, d, x, i;

		for (x = 0; x <= 9; x++)
		{
			for (a = 0; a <= 9; a++)
			{
				c = x * a;
				i = c / 10;
				d = c % 10;
				if (i == 0 && a == 0)
				{
					_putchar(i + '0');
				if (a != 9)
					_putchar(',');
				}
				else if
				(i == 0 && a > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				if (a != 9)
					_putchar(',');
				}
				else if
				(i > 0)
				{
					_putchar(' ');
					_putchar(i + '0');
					_putchar(d + '0');
				if (a != 9)
				{
				_putchar(',');
				}
				}
				if (a == 9)
					_putchar('\n');
		}

	}
}
