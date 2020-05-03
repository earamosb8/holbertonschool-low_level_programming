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
	dlistint_t *del = NULL;

	if (!head || !(*head))
		return (-1);
	del = *head;
	for (a = 1; a < index; a++)
	{
		if (del->next)
			del = del->next;
		else
			return (-1);
	}

	if (index - a == 0 && del != NULL)
	{
		if (del->next != NULL)
			del->next->prev = del->prev;
		if (del->prev != NULL)
			del->prev->next = del->next;
		if (del == *head)
			*head = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
