#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_insert_left
 * @parent: root
 * @value: value to be insert
 * Return: new binary_tree_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *current = parent;

	new_node = binary_tree_node(NULL, value);
	if (!parent || !new_node)
		return (NULL);

	while (current)
	{
		if (!current->left)
		{
			/**
			 * If parent already has a left-child, the new node must take its place,
			 * and the old left-child must be set as the left-child of the new node
			 */
			if (current->parent->left->n == current->n)
			{
				new_node->parent = current->parent;
				current->parent->left = new_node;
				new_node->left = current;
				new_node->left->parent = new_node;
				return (new_node);
			}
			new_node->parent = current;
			current->left = new_node;
			break;
		}
		current = current->left;
	}
	return (current);
}
