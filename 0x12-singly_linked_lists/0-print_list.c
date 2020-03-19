#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		if (h->str != NULL)
		{
		printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
		printf("[%i] %s\n", 0, "(nil)");
	}
	h = h->next;
	elements++;
	}
return (elements);
}


