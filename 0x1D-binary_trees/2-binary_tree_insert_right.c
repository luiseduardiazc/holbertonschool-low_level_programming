#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_insert_left
 * @parent: root
 * @value: value to be insert
 * Return: new binary_tree_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *current = parent;

	new_node = binary_tree_node(NULL, value);
	if (!parent || !new_node)
		return (NULL);

	while (current)
	{
		if (!current->right)
		{
			/**
			 * If parent already has a right-child, the new node must take its place,
			 * and the old ight-child must be set as the right-child of the new node
			 */
			if (current->parent->right->n == current->n)
			{
				new_node->parent = current->parent;
				current->parent->right = new_node;
				new_node->right = current;
				new_node->right->parent = new_node;
				return (new_node);
			}
			new_node->parent = current;
			current->right = new_node;
			break;
		}
		current = current->right;
	}
	return (current);
}
