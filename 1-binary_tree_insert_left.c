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
binary_tree_t *temp;

if (parent == NULL)
return (NULL);

temp = parent;

leftnode = malloc(sizeof(binary_tree_t));
if (leftnode == NULL)
return (NULL);


leftnode->n = value;
leftnode->left = NULL;
leftnode->right = NULL;

if (temp->left == NULL)
{
temp->left = leftnode;
leftnode->parent = parent;


return (leftnode);
}
else
{
temp->left->left = leftnode;
leftnode->parent = temp->left->left;
return (leftnode);
}
}
