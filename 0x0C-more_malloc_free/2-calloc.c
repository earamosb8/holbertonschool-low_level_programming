#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc -function.
 * @nmemb: number of elements.
 * @size: size of variable.
 * Return:  An array of two dimensional.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
