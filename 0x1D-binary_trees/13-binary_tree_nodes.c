#include "binary_trees.h"

/**
 * binary_tree_nodes - binary_tree_nodes
 * @tree: Pointer to the node to start count
 * Return: counts the nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
