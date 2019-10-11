#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 *@ht: hash table
 *Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *head = NULL;
	hash_node_t *next_node = NULL;

	for (; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head != NULL)
		{
			next_node = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
