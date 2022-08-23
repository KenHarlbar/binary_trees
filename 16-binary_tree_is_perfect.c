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
 * height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 * the height
 *
 * Return: 0 if tree is NULL and height of tree if otherwise
 */
int height(const binary_tree_t *tree)
{
int leftHeight = 0;
int rightHeight = 0;

if (!tree)
return (-1);

leftHeight = height(tree->left);
rightHeight = height(tree->right);

if (leftHeight > rightHeight)
return (leftHeight + 1);

return (rightHeight + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary
 * tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree && (height(tree->left) == height(tree->right)))
{
if (height(tree->left) == -1)
return (1);

if (is_leaf(tree->left) && is_leaf(tree->right))
return (1);

if (is_parent(tree))
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}

return (0);
}
