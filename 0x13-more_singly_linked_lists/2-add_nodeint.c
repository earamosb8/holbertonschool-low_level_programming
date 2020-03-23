#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: The list
 * @n: The integer
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noden;

	if (head == NULL)
	{
		return (NULL);
	}

	noden = malloc(sizeof(listint_t));
	if (noden == NULL)
		return (NULL);
	noden->n = n;
	noden->next = *head;

	*head = noden;

	return (noden);
}

