#include "binary_trees.h"

/**
 * binary_tree_node - creates a b-tree
 * @parent: B-tree
 * @value: int
 * Return: B-tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newtree;
newtree = malloc(sizeof(binary_tree_t));
if (newtree == NULL)
{
return (NULL);
}
newtree->n = value;
newtree->parent = parent;
newtree->left = NULL;
newtree->right = NULL;

return (newtree);
}
