#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: The list
 * @idx: The index where the new node should be added
 * @n: The value of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nuevo;
	listint_t *tmp = *head;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	for (i = 1; i < idx; i++)
	{
		if (tmp != NULL)
		{

			tmp = tmp->next;
		}
		else
		{
			return (NULL);
		}
	}

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
	}
	else if (tmp != NULL)
	{
		nuevo->next = tmp->next;
		nuevo->n = n;
		tmp->next = nuevo;
	}
	return (nuevo);
}


