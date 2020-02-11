#include "holberton.h"
/**
 * print_last_digit ---
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a >= 0)
	{
		_putchar(a + '0');

	}
	else
	{
		a = a * -1;
		_putchar(a + '0');

	}
		return (a);
}
