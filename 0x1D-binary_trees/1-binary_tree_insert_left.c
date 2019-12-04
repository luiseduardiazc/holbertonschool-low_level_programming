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
	binary_tree_t *aux = parent;

	new_node = binary_tree_node(NULL, value);
	if (!parent || !new_node)
		return (NULL);

	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent);
	}

	aux = parent->left;
	new_node = (binary_tree_node(parent, value));
	new_node->left = aux;
	aux->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
