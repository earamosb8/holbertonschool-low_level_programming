#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete the specified node
 * @head: The list
 * @index: The index where the node should be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a;
	dlistint_t *d = NULL;

	if (!head || !(*head))
		return (-1);
	d = *head;
	for (a = 0; a < index && d != NULL; a++)
	{
		d = d->next;
	}
	if (index - a == 0 && d != NULL)
	{
		if (d->next != NULL)
			d->next->prev = d->prev;
		if (d->prev != NULL)
			d->prev->next = d->next;
		if (d == *head)
			*head = d->next;
		free(d);
		return (1);
	}
	return (-1);
}
