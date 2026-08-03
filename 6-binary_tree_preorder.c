#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: b-tree
 * @func: function
 * Return: 0 if leaf  if no 1
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
