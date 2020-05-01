#include "lists.h"
/**
 * print_dlistint - print all the elements in a dll
 * @h: pointer to dll
 * Return: size of dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
