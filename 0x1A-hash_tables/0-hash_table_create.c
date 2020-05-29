#include "hash_tables.h"
/**
 * hash_table_create - create a hash table with chaining
 * @size: size of hash table
 *
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	h = calloc(1, sizeof(hash_table_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->size = size;
	h->array = calloc(size, sizeof(hash_node_t *));
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	return (h);
}
