#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);




	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (strcmp(key, current_node->key) == 0)
			{
				return (current_node->value);
			}
			else
				current_node = current_node->next;
		}
	}
	free(current_node);
	return (NULL);

}
