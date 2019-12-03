#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the node to measures the size
 * Return: The size of the tree starting at @node
 * Size = 1 (for the root) + Size Of left Sub-Tree + Size Of right Sub-Tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
