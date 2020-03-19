#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned long elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
	h = h->next;
	elements++;
	}
return (elements);
}
