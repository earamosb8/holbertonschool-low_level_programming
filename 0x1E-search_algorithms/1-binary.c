#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: is the value to search
 * Return: the index where value is located or If value is not present
 * in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{

	size_t start = 0;
	size_t end = size - 1;
	size_t p = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		print_array(array, start, end);
		p = (start + end) / 2;
		if (array[p] == value)
		{
			return (p);
		}
		else if (array[p] > value)
		{
			end = p - 1;
		}
		else
		{
			start = p + 1;
		}
	}
	return (-1);
}
/**
 * print_array - search a value in to ordered array
 * @array: integer array
 * @start: initial index to print
 * @end: end index to print
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d,", array[i]);
			}
		}
		printf("\n");
	}

}
