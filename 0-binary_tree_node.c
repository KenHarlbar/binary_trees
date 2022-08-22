#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: null if malloc fails
 *         else, newNode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

if (!newNode)
return (newNode);

newNode->parent = parent;
newNode->n = value;
newNode->right = NULL;
newNode->left = NULL;

return (newNode);
}
