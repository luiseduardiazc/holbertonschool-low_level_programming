#include "sort.h"

/**
 * swap_list - swap_list
 * @left: left node
 * @right: right node
 * @list: list
 * Return: Nothing
 */
void swap_list(listint_t *left, listint_t *right, listint_t **list)
{
	left->next = right->next;
	right->prev = left->prev;
	if (right->next)
		right->next->prev = left;
	left->prev = right;
	right->next = left;
	if (right->prev != NULL)
	{
		right->prev->next = right;
	} else
	{
		*list = right;
	}

	print_list(*list);
}

/**
 * insertion_sort_list - insertion_sort_list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (list)
	{
		if ((*list) == NULL || (*list)->next == NULL)
			return;
		current = (*list)->next;
		while (current)
		{
			listint_t *tmp = current->prev;

			if (tmp->prev == NULL && current->n < tmp->n)
			{
				swap_list(tmp, current, list);
				current = current->next;
				continue;
			}
			while (tmp)
			{
				if (current->n < tmp->n)
					swap_list(tmp, current, list);

				tmp = tmp->prev;
			}
			current = current->next;
		}
	}
}
