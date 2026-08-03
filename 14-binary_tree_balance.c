#include "binary_trees.h"
/**
 * custom_height - calculates height
 * @tree: btree
 * Return: size_t
 */
size_t custom_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;
if (tree == NULL)
return (0);
left_height = custom_height(tree->left);
right_height = custom_height(tree->right);
if (left_height > right_height)
return (left_height + 1);
return (right_height + 1);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: btree
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (custom_height(tree->left) - custom_height(tree->right));
}
