#include "binary_trees.h"

/**
 * depth - gets leftmost leaf depth
 * @tree: pointer to root node
 * Return: depth of the tree
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
 * is_perfect - recursively checks perfect tree
 * @tree: pointer to root node
 * @d: depth of leftmost leaf
 * @level: current level in tree
 * Return: 1 if perfect, 0 else
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (d == level + 1);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (is_perfect(tree->left, d, level + 1) &&
is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks perfect tree
 * @tree: pointer to root node
 * Return: 1 perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d;
if (tree == NULL)
return (0);
d = depth(tree);
return (is_perfect(tree, d, 0));
}
