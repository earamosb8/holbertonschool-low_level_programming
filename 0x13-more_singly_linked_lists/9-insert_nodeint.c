#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: The list
 * @idx: The index where the new node should be added
 * @n: The value the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nuevo;
	listint_t *position = *head;

	if (!head)
		return (NULL);
	for (i = 1; i < idx; i++)
	{
		if (position)
			position = position->next;
		else
			return (NULL);
	}

	nuevo = malloc(sizeof(listint_t));
	if (!nuevo)
		return (NULL);
	nuevo->n = n;
	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
	}
	else if (position)
	{
		nuevo->next = position->next;
		position->next = nuevo;
	}

	return (nuevo);
}
