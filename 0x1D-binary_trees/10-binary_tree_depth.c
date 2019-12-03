#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measures the depth
 * Return: The depth of the tree starting at @node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t max_depth;

	if (!tree)
		return (0);
	max_depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (max_depth);
}
