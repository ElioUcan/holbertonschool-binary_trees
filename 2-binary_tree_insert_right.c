#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: B-tree
 * @value: int
 * Return: B-tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *rightnode;
if (parent == NULL)
return (NULL);


rightnode = malloc(sizeof(binary_tree_t));
if (rightnode == NULL)
return (NULL);


rightnode->n = value;
rightnode->left = NULL;
rightnode->right = NULL;

if (parent->right == NULL)
{
parent->right = rightnode;
rightnode->parent = parent;
return (rightnode);
}
else
{
rightnode->right = parent->right;
parent->right->parent = rightnode;
rightnode->parent = parent;
parent->right = rightnode;
return (rightnode);
}
}