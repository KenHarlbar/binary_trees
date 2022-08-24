#include "binary_trees.h"

/**
 * recursive_height - return the height of a tree
 *
 * @tree: pointer to tree
 *
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
if (!tree)
return (0);

size_t leftHeight = 0;
size_t rightHeight = 0;

leftHeight = recursive_height(tree->left);
rightHeight = recursive_height(tree->right);

if (leftHeight > rightHeight)
return (leftHeight + 1);

return (rightHeight + 1);
}

/**
 * print_level - print all nodes in a level
 *
 * @tree: pointer to tree
 * @level: level index
 * @func: function to print node value
 *
 * Return: nothing
 */
void print_level(const binary_tree_t *tree, size_t level,
void (*func)(int))
{
if (!tree)
return;

if (level == 1)
func(tree->n);

else if (level > 1)
{
print_level(tree->left, (level - 1), func);
print_level(tree->right, (level - 1), func);
}
}

/**
 * binary_tree_levelorder - function that goes through a binary
 * tree using level-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: NULL if tree or func is NULL
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !(func))
return;

size_t height, i;

height = recursive_height(tree);

for (i = 1; i <= height; i++)
print_level(tree, i, func);
}
