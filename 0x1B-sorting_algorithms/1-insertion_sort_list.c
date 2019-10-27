#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	int i, j;
	listint_t *temp = NULL;
	listint_t *head = *list;

	while(head != NULL)
	{
		if(head->prev == NULL)
		{
			if ((head->n) > (head->next->n))
			{

				temp = head->next;
				head->next = temp->next;
				temp->next = head;
				head->prev = temp;
				temp->prev = NULL;
				*list = temp;
				print_list(*list);
			}
		}
		if (head->prev && head->next)
		{
				if(head->n > head->prev->n)
				{
					temp = head->prev;
					temp->next = head->next;
					head->prev = temp->prev;
					head->next = temp;
					if (temp->prev)
						temp->prev->next = head;
					*list = temp;
					print_list(*list);
				}
		}
		if (head->next == NULL)
		{

		}
		head = head->next;

	}

}
