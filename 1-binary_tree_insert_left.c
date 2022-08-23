#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created node or null if parent is null
 *         or if malloc fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
binary_tree_t *old_left;

if (!newNode || !parent)
return (NULL);

newNode->n = value;
newNode->parent = parent;
newNode->right = NULL;
newNode->left = NULL;

if (newNode->parent->left == NULL)
newNode->parent->left = newNode;
else
{
old_left = newNode->parent->left;
old_left->parent = newNode;
newNode->left = old_left;
newNode->parent->left = newNode;
}
return (newNode);
}
