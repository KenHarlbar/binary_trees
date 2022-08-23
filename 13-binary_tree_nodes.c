#include "binary_trees.h"

/**
 * has_child - function that checks if a node has at least
 * one child
 *
 * @node: pointer to node
 *
 * Return: 1 if node has a child and 0 if otherwise
 */
size_t has_child(const binary_tree_t *node)
{
size_t child = 0;

if (node && ((node->right) || (node->left)))
child = 1;

return (child);
}

/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: 0 if tree is NULL and number of nodes if otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (has_child(tree))
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

return (0);
}
