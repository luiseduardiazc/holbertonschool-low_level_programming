#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_insert_left
 * @parent: root
 * @value: value to be insert
 * @return: new binary_tree_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
        return (NULL);
    new_node->n = value;
    new_node->parent = NULL;
    new_node->left = NULL;
    new_node->right = NULL;
    if (!parent)
    {
        return (new_node);
    }
    new_node->parent = parent;

    return (new_node);
}
