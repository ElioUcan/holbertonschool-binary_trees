#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: b-tree
 * Return: 0 if leaf  if no 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
{
return (1);
}
return (0);
}
