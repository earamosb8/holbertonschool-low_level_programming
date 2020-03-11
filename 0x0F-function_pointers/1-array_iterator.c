#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator.
 * @array:array
 * @size: size array
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || *action == NULL)
	{
	}
	else
	{
		for (a = 0; a < size; a++)
	{
		action(*array++);
	}
	}
}


