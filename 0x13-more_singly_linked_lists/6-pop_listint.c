#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: The list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *nodo;

	if (!head)
	{
		return (0);
	}

	num = (*head)->n;

	nodo = *head;
	*head = (*head)->next;
	free(nodo);

	return (num);
}

