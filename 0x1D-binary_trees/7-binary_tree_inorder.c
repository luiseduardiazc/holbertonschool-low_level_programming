#include "binary_trees.h"

/**
 * binary_tree_inorder - binary_tree_inorder
 * @tree: tree
 * @func: func
 * Return: Nothing
 * [ left, root, right ]
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}

