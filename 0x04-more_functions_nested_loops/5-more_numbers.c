#include "holberton.h"
/**
 * more_numbers - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int a, b, d, i;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				d = b / 10;
				_putchar(d + '0');
			}
			i = b % 10;
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
