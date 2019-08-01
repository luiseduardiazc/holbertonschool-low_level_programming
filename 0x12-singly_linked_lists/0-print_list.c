#include "lists.h"
/**
 * print_list - print list
 * @h: pointer from head list_t
 * Description: This function print list
 * Return: Return number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t const *current = h;
	size_t num_elements = 0;

	if (!current)
		return (1);
	while (current != NULL)
	{
		if (!current->str)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] [%s]\n", current->len, current->str);
		}
		current = current->next;
		num_elements++;
	}
	return (num_elements);
}
