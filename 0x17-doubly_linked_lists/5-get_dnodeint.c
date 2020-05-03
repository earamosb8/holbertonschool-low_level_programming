#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node of a listint_t linked list
 * @head: head The list
 * @index: The index of the node
 *
 * Return: The nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
	{
		return (NULL);
	}
	for (a = 1; a <= index; a++)
	{
		if (head->next)
		{
		head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
