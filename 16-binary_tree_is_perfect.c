#include "binary_trees.h"

/**
 * depth - calculates the depth of the leftmost leaf
 * @tree: pointer to the root node
 * Return: the depth of the tree
 */
int depth(const binary_tree_t *tree)
{
int d = 0;
while (tree != NULL)
{
d++;
tree = tree->left;
}
return (d);
}

/**
 * is_perfect - checks recursively if the tree is perfect
 * @tree: pointer to the root node
 * @d: depth of the leftmost leaf
 * @level: current level in the tree
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (d == level + 1);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (is_perfect(tree->left, d, level + 1) && is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d;
if (tree == NULL)
return (0);
d = depth(tree);
return (is_perfect(tree, d, 0));
}
