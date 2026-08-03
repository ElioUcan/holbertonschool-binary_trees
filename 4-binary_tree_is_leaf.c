#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: b-tree
 * Return: 1 if leaf  if no 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL && (node->left == NULL && node->right == NULL))
return (0);

return (1);
}
