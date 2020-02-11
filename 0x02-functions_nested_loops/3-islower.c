#include "holberton.h"

/**
 * _islower -----
 * @c: The character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
	{
		if (c < 65 || c > 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
