#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: NULL if node or !(node.sibling) or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !(node->parent))
return (NULL);

if (node->parent->right != node)
return (node->parent->right);

return (node->parent->left);
}
