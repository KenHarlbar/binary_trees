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
 * is_parent - checks if a node is a parent
 *
 * @node: pointer to node
 *
 * Return: 1 if node is a parent and 0 if otherwise
 */
size_t is_parent(const binary_tree_t *node)
{
size_t parent = 0;

if (node && node->left && node->right)
parent = 1;

return (parent);
}

/**
 * binary_tree_is_full - a function that checks if a binary
 * tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or if tree is not a full parent
 * and 1 if otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (is_leaf(tree))
return (1);

if (is_parent(tree))
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}
