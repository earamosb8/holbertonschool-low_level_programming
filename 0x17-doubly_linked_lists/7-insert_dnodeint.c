#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: The list
 * @idx: The index where the new node should be added
 * @n: The value the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ant, *nodo, *temp;

	if (h == NULL || (*h == NULL && idx > 0))
		return (0);
	temp = *h;
	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
		return (NULL);
	nodo->n = n;
	nodo->prev = NULL;
	nodo->next = NULL;
	if (idx == 0 && *h == NULL)
	{
		*h = nodo;
		return (nodo);
	}
	if (idx == 0)
	{
		nodo->next = *h;
		(*h)->prev = nodo;
		*h = nodo;
		return (nodo);
	}

	for (i = 0; i < idx; i++)
	{
		if (temp != NULL)
			ant = temp, temp = temp->next;
		else
			return (NULL);
	}
	ant->next = nodo, nodo->prev = ant;
	if (temp != NULL)
		nodo->next = temp, temp->prev = nodo;
	return (nodo);
}
