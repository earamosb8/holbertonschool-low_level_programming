#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the nodes of linked list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
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
