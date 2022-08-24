#include "binary_trees.h"

/**
 * recursive_depth - returns the depth of a node
 *
 * @node: pointer to node
 *
 * Return: depth
 */
size_t recursive_depth(const binary_tree_t *node)
{
if (!node)
return (-1);

return (recursive_depth(node->parent) + 1);
}

/**
 * binary_tree_depth - return the depth of a node
 *
 * @node: pointer to node
 *
 * Return: 0 if node is NULL and depth if not
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
if (!node)
return (0);

return (recursive_depth(node));
}

/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 *
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: pointer to lowest common ancestor and NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
if (!first || !second)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

if (binary_tree_depth(first) > binary_tree_depth(second))
return (binary_trees_ancestor(first->parent, second));
if (binary_tree_depth(first) < binary_tree_depth(second))
return (binary_trees_ancestor(first, second->parent));

return (binary_trees_ancestor(first->parent, second->parent));
}
