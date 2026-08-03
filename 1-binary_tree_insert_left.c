#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: B-tree
 * @value: int
 * Return: B-tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *leftnode;
if (parent == NULL)
return (NULL);


leftnode = malloc(sizeof(binary_tree_t));
if (leftnode == NULL)
return (NULL);


leftnode->n = value;
leftnode->left = NULL;
leftnode->right = NULL;

if (parent->left == NULL)
{
parent->left = leftnode;
leftnode->parent = parent;
return (leftnode);
}
else
{
leftnode->left = parent->left;
parent->left->parent = leftnode;
return (leftnode);
}
}
