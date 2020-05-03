#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: pointer to list
 * @n: value to add
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *pnt = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	pnt = malloc(sizeof(dlistint_t));
	if (pnt == NULL)
	{
		return (NULL);
	}
	pnt->n = n;
	pnt->prev = NULL;
	pnt->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = pnt;
	}
	*head = pnt;
	return (pnt);
}

