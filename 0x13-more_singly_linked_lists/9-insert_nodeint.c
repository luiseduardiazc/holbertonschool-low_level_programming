#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: pointer from head listint
 * @idx: int index
 * @n: int number
 * Description: This function insert node in idx position
 * Return: Return node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *temp;
	listint_t *new;
	unsigned int cont = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (curr)
	{
		if (cont == idx - 1)
		{
			temp = curr;
			new->next = temp->next;
			temp->next = new;
			return	(temp);
		}
		curr = curr->next;
		cont++;
	}
	return (NULL);
}
