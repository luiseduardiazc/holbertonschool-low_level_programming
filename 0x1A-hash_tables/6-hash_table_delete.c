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

	if (!ht)
		return;
	for (; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head != NULL)
		{
			hash_node_t *curren_node = head;
			head = NULL;
			head = curren_node;
		}
		if (head)
			free(head);
		if (ht->array[index])
			free(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}