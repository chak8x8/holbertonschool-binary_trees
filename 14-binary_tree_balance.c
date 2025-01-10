#include "binary_trees.h"

static int measure_height(const binary_tree_t *tree);

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

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	balance_factor = left_height - right_height;

	return (balance_factor);
}

/**
 * measure_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If `tree` is NULL, return 0.
 */
static int measure_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
