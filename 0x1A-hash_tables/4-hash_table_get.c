#include "hash_tables.h"
/**
 * hash_table_get - add to to hash table
 * @ht: hash table
 * @key: key
 * Return: the value or Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == 0)
	{
		return (NULL);
	}
	x = key_index((const unsigned char *)key, ht->size);
	while (ht->array[x])
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			return (ht->array[x]->value);
		}
		ht->array[x] = ht->array[x]->next;
	}
	return (NULL);
}
