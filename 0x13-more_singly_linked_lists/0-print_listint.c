#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Print all the elements of a list_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}

