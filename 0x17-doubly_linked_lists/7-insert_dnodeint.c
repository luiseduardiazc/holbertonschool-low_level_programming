#include "lists.h"
/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @h: list type dlistint_t
 * @idx: index
 * @n: number to insert in new node
 * Return: head whit new node at idx position or Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *current_node = *h;
	dlistint_t *new_node = NULL;
	dlistint_t *next_node = NULL;

	add_dnodeint(&new_node, n);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current_node != NULL)
	{
		if (counter == (idx - 1))
		{
			next_node = current_node->next;
			new_node->prev = current_node;
			new_node->next = next_node;
			current_node->next = new_node;
			return (*h);
		}
		current_node = current_node->next;
		counter++;
	}
	if (counter == 0)
		return (NULL);
	return (*h);
}

