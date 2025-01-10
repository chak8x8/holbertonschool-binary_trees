#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree. If `tree` is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively calculate the size of the left and right subtrees */
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	/* Add 1 to include the current node */
	return (size + 1);
}
