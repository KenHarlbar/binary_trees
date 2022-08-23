#include "binary_trees.h"

/**
 * max - find the maximum of two values
 *
 * @left: left value
 * @right: right value
 *
 * Return: the maximum of the two arguments
 */
size_t max(size_t left, size_t right)
{
if (left > right)
return (left);

return (right);
}

/**
 * recursive_height - measures the height of a binary tree
 *
 * @tree: pointer to tree root
 *
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
size_t leftHeight, rightHeight;

if (!tree)
return (0);

leftHeight = recursive_height(tree->left);
rightHeight = recursive_height(tree->right);

return (max(leftHeight, rightHeight) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 * the height
 *
 * Return: 0 if tree is NULL and height of tree if otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (recursive_height(tree) - 1);
}
