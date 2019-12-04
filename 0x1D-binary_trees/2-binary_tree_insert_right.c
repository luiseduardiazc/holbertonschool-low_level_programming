#include "binary_trees.h"

/**
 * binary_tree_insert_right - binary_tree_insert_right
 * @parent: root
 * @value: value to be insert
 * Return: new binary_tree_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);

	if (parent->right)
	{
		aux = parent->right;
		new_node = binary_tree_node(parent, value);
		new_node->right = aux;
		aux->parent = new_node;
		parent->right = new_node;

		return (new_node);
	}
	else
	{
		parent->right = binary_tree_node(parent, value);
		return (parent);
	}
}
