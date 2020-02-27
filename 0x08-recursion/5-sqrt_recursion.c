#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion -  returns the natural square root of a number. .
 * * @n: int
 * @a: int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int increment(int n, int a);
int _sqrt_recursion(int n)
{
	int a = 1;

	return (gogo(n, a));

}
/**
 * increment - this is the function increment
 * @n: int
 * @a: int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

	int increment(int n, int a)
	{
		if (a * a == n)
		{
			return (a);
		}
		else if (a * a > n)
		{
			return (-1);
		}
		else
		{
			a++;
			return (increment(n, a));
		}
	}


