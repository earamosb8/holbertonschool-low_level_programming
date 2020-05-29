#include "hash_tables.h"
/**
 * hash_table_create - create a hash table with chaining
 * @size: size of hash table
 *
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (size == 0)
	{
		return (NULL);
	}
	h = malloc(sizeof(hash_table_t) * 1);
	if (h == NULL)
	{
		return (NULL);
	}
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	return (h);
}
