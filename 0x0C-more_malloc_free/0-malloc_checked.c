#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - free memory grid
 * @b: int  ( *)
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
