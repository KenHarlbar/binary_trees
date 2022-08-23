#include "binary_trees.h"

/**
 * is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node
 *
 * Return: 1 if node is a leaf and 0 if otherwise
 */
size_t is_leaf(const binary_tree_t *node)
{
size_t leaf = 0;

if (node && !(node->right) && !(node->left))
leaf = 1;

return (leaf);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number
 * of leaves
 *
 * Return: 0 if tree is NULL and number of leaves if otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (is_leaf(tree))
return (1);

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
