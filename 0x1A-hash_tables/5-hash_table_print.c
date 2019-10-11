#include "hash_tables.h"
/**
 * hash_table_print - Print hash table
 *@ht: hash table
 *Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, num_slots_busy = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		if (ht->array[index])
			num_slots_busy++;
		index++;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		if (head)
			num_slots_busy--;
		while (head != NULL)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (num_slots_busy == 0 && head->next != NULL)
				printf(", ");
			if (num_slots_busy != 0)
				printf(", ");
			head = head->next;
		}
	}
	printf("}\n");
}
