#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: key
 * @size: size of the table
 * Return: hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
