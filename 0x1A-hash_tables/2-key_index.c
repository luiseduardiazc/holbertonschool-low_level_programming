#include "hash_tables.h"
/**
 * key_index - This is a function of hash
 * Description: This function takes a key and return index
 *@key: key
 *@size: size of array
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);

	return (hash_code % size);
}
