#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to pointer to list_t
 * Description: free list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}

