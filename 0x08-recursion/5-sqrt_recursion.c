#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
	int gogo(int n , int a);
	int _sqrt_recursion(int n)
	{
	int a = 1;
	if(n >0)
	{
		gogo(n,a);
	}
		return(0);
	}

	int gogo (int n, int a)
	{
		if (a * a == n)
		{
		return (a);
		}
		else
		{
			a++;
			gogo(n,a);
		}
return (a);
}
