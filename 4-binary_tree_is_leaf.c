#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: b-tree
 * Return: 1 if leaf  if no 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node->parent == NULL)
return (0);

return (1);
}
