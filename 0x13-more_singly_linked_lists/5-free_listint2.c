#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to pointer to list_t
 * Description: free list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
