#include "sort.h"

/**
 * swap_list - swap_list
 * @left: left node
 * @right: right node
 * @list: list to be swap
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
 * cocktail_sort_list - cocktail_sort_list
 * @list: list
 * Return: Nothing
 */
void cocktail_sort_list(listint_t **list)
{
	int swap;
	listint_t *last = NULL, *head = *list;

	if (!list || !(*list) || !head || !(*list)->next)
		return;
	if (list)
	{
		do {
			swap = 0;
			while (head)
			{
				if (head->next != NULL && (head->n > head->next->n))
				{
					swap_list(head, head->next, list);
					head = head->prev;
					swap = 1;
					continue;
				}
				if (head->next == NULL)
					last = head;
				head = head->next;
			}
			if (!swap)
				break;
			while (last)
			{
				if (last->prev && (last->n < last->prev->n))
				{
					swap_list(last->prev, last, list);
					last = last->next;
					swap = 1;
					continue;
				}
				if (last->prev == NULL)
					head = last;
				last = last->prev;
			}
		} while (swap);
	}
}
