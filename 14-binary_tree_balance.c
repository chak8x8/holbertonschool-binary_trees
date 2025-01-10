#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor. If `tree` is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	balance_factor = left_height - right_height;

	return (balance_factor);
}
