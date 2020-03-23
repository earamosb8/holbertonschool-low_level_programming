#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 * add_node - Add a new node at the beginning of a list_t list
 * @head: Pointer to the list
 * @str: The string
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
	list *new;

	if(head == NULL)
	{
		return(NULL);
	}

	new = malloc(size(list_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

