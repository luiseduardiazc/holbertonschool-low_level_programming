#include "lists.h"
/**
 * dlistint_len - print_dlistint
 * @h: pointer
 * Return: count of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *current = h;

	if (!current)
	{
		return (count);
	}
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

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

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	add_dnodeint(&new_node, n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0 && current_node != NULL)
	{
		add_dnodeint(h, n);
		return (new_node);
	}

	while (current_node != NULL && (idx < dlistint_len(*h)))
	{
		if (counter == (idx - 1))
		{
			next_node = current_node->next;
			new_node->prev = current_node;
			new_node->next = next_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		counter++;
	}
	if (counter == 0)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
