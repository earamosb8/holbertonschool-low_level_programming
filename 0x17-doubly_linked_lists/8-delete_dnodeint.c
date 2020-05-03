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
	dlistint *position = *head;
	dlistint_t *del = NULL;

	if (!head || !(*head))
		return (-1);

	for (a = 1; a < index; a++)
	{
		if (position->next)
			position = position->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		del = position;
		*head = position->next;
	}
	else
	{
		del = position->next;
	}

	position->next = del->next;

	free(del);

	return (1);
}
