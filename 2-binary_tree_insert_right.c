#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created node or null if parent is null
 *         or if malloc fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
binary_tree_t *old_right;

if (!newNode || !parent)
return (NULL);

newNode->n = value;
newNode->parent = parent;
newNode->right = NULL;
newNode->left = NULL;

if (newNode->parent->right == NULL)
newNode->parent->right = newNode;
else
{
old_right = newNode->parent->right;
old_right->parent = newNode;
newNode->right = old_right;
newNode->parent->right = newNode;
}
return (newNode);
}
