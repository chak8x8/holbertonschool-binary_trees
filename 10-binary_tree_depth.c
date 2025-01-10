#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If `tree` is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	depth = (binary_tree_depth(tree->parent)) + 1;

	return (depth);
}
