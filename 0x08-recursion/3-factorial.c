#include "holberton.h"
/**
 * factorial - factorial int.
 * @n: int
 * Return: Always 0.
 */
int factorial(int n)
{

	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	else if
	(n == 0)
	{
	return (1);
	}
return (-1);
}
