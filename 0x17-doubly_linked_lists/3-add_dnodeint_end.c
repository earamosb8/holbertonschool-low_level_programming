#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to a linked list
 * @n: value to insert
 * Return: address of node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;
	tmp = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (tmp->next !=  NULL)
		tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;
	return (node);
}
