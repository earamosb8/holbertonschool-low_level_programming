#include "holberton.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n:----
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1 ; b < a; b++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');

		}

}
}

