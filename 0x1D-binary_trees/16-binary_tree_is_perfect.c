#include "binary_trees.h"

/**
 * depth_any_node - depth_any_node
 * @node: node
 * Return: depth
 */
int depth_any_node(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->right;
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

	depth = depth_any_node(tree);
	return (is_perfect(tree, depth, 0));
}
