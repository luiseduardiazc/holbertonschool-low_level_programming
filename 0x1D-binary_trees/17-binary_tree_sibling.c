#include "binary_trees.h"
/**
 * binary_tree_sibling - binary_tree_sibling
 * @node: node is a pointer to the node to find the sibling
 * Return: return a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
}
