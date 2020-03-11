#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	for(a = 0; a < size; a++)
	{
		action(*array++);
	}
}


