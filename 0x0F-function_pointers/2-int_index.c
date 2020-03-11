#include <stdlib.h>
/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp:pointer to function
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0, b = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		b = cmp(array[a]);
		if (b != 0)
		{
			return (a);
		}
	}
	return (-1);
}


