#include <stdlib.h>
#include "lists.h"
/**
 * free_dlist_t - free the memory.
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *buff;

	temp = head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
}

