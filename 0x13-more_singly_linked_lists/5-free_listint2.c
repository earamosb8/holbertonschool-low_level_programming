#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free the memory.
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *buff;

	temp = *head;
	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
	*head = NULL;
}

