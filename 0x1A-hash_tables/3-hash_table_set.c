#include "hash_tables.h"
/**
 * hash_table_set - This function set element onto hash table
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *existing_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	if (ht->size == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	existing_node = ht->array[index];
	while (existing_node != NULL)
	{
		if (strcmp(existing_node->key, key) == 0)
		{
			existing_node->value = (char *)value;
			return (0);
		}
		existing_node = existing_node->next;
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
