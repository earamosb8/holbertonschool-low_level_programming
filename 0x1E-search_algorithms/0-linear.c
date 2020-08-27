#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index with value matched or -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t t;

	if (size < 1 || array == NULL)
	{
		return (-1);
	}
	for (t = 0; t < size; t++)
	{
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		if (value == array[t])
			return (t);

	}
	return (-1);
}


