#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number if successful, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
int a = 0, base = 1, c = 0;
unsigned int conversion = 0;


	if (b == NULL)
		return (0);
	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		a++;
	}
	for (c = a - 1; c >= 0; c--)
	{
		if (b[c] == '1')
		{

			conversion = conversion + base;
		}

		base = base * 2;
	}

	return (conversion);
}
