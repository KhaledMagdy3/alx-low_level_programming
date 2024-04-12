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
	hash_node_t *new_node;

	if ((ht == NULL) || (key == NULL) || (*key == '\0'))
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new_node = add_node(&ht->array[index], key, value);
	if (new_node == NULL)
		return (0);
	else
		return (1);
}

/**
 * add_node - function to create and add anew node
 * @head: pointer to pointer to the first node in the index
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Return: return the new node
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (NULL);
	if (value == NULL)
		new_node->value = NULL;
	else
	{
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (NULL);
	}
	temp_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (temp_node != NULL)
		{
			if (strcmp(temp_node->key, new_node->key) == 0)
			{
				temp_node->value = strdup(value);
				if (temp_node->value == NULL)
					return (NULL);
				free_all(new_node);
				return (temp_node);
			}
			temp_node = temp_node->next;
		}
		new_node->next = temp_node;
		*head = new_node;
	}
	return (new_node);
}

/**
 * free_all - free the node
 * @new_node: hash_node_t
 * Return: void
*/

void free_all(hash_node_t *new_node)
{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
}






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

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) != 0)
		{
			return (ht->array[index]->value);
		}

		ht->array[index] = ht->array[index]->next;
	}

		return (NULL);

}
