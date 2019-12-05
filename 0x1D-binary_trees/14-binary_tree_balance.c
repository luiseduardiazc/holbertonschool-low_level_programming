#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the node to measures the balance
 * Return: the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (!tree)
		return (0);
	height_left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_left - height_right);
}
