#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: function that retrieves a value associated with a key.
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 *  or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, sizeof(ht->array));

	if (ht->array[index]->key == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ht->array[index]->value);
	}
}
