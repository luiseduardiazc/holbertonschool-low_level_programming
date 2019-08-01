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
 * add_node - add node
 * @head: pointer to pointer to list_t
 * @str: conts char string
 * Description: Add new node at the beginning of a list_t list
 * Return: Return new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (new_node);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen((char *)str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
