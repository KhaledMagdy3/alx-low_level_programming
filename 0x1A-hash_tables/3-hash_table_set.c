#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, sizeof(ht->array));
	if (ht->array[index] == NULL)
	{
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
	}
	else
	{
		ht->array[index]->next->key = strdup(key);
		ht->array[index]->next->value = strdup(value);
	}

	return (1);
}
