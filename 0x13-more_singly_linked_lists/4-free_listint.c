#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free the memory.
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *buff;

	temp = head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
}

