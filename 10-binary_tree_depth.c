#include "binary_trees.h"

/**
 * recursive_depth - measures the depth of a binary tree
 *
 * @tree: pointer to tree root
 *
 * Return: depth
 */
size_t recursive_depth(const binary_tree_t *tree)
{
if (!tree)
return (-1);

return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 * the height
 *
 * Return: 0 if tree is NULL and height of tree if otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (recursive_depth(tree));
}
