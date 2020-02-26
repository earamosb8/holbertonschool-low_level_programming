#include "holberton.h"
/**
 * _pow_recursion -Write a function that returns of x raised to the power of y.
 * @x: The character to raised
 * @y: the power
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
	y--;
	x = x * _pow_recursion(x, y);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (-1);
	}
return (x);
}
