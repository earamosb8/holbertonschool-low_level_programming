#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: base 10 number
 * @index: index to insert
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int datos;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	datos = 1 << index;
	datos = ~datos;
	*n = *n & datos;
	return (1);
}
