void free_list(list_t *head)
{

	while(head != NULL)
	{
		head = head->next;
		free(aux);
	}

}
