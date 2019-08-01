#include "lists.h"
/**
 * list_len - list len
 * @h: pointer from head list_t
 * Description: Return number of elements
 * Return: Return number of elements
 */
size_t list_len(const list_t *h)
{
	list_t const *current = h;
	size_t num_elements = 0;

	if (!current)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		num_elements++;
	}
	return (num_elements);
}
