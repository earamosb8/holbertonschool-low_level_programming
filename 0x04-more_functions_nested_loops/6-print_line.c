#include "holberton.h"
/**
 * print_line - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
int a;

	if (n == 0 || n == -4)
	{
		n = n;
	}
	else
	{

		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}}
	_putchar('\n');

}
