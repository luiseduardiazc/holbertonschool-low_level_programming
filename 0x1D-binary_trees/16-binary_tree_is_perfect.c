#include "binary_trees.h"

/**
 * depth_left - depth_left
 * @node: node
 * Return: depth
 */
int depth_left(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - is_perfect
 * @tree: node
 * @depth: depth
 * @level: level
 * Return: 1 is perfect 0 not perfect
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, depth, level + 1)
	&& is_perfect(tree->right, depth, level + 1));

}

/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: node
 * Return:  1 is perfect 0 not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	depth = depth_left(tree);
	return (is_perfect(tree, depth, 0));
}
