#include "lists.h"
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 * add_node_end - add node end
 * @head: pointer to pointer to list_t
 * @str: conts char string
 * Description: Add new node at the end of a list_t list
 * Return: Return new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen((char *)str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	} else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
