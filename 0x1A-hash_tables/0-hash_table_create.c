#include "hash_tables.h"
/**
 * hash_table_create - hash_table_create
 *@size: size of array
 *Return: new_hash_table type hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	if (size < 1)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return  (NULL);
	}
	/* new_hash_table->array = malloc(sizeof(hash_node_t *) * size); */
	new_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_hash_table->array == NULL)
	{
		return (NULL);
	}
	new_hash_table->size = size;
	return (new_hash_table);
}

