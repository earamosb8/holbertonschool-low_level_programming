#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - calloc function.
 * @min: min value.
 * @max: mex value.
 * Return:  An array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int l = 0, a = 0;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(l * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
