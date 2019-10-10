#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	new_hash_table = malloc(sizeof(hash_node_t));
	if (new_hash_table == NULL)
	{
		return  (NULL);
	}
	new_hash_table->array = malloc(sizeof(int) * size);
	if (new_hash_table->array == NULL)
	{
		return (NULL);
	}
	new_hash_table->size = size;
	return (new_hash_table);
}

