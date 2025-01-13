#include "binary_trees.h"

/* Helper function to calculate the height of the tree */
static int measure_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	/* If heights are unequal, tree is not perfect */
	if (left_height != right_height)
	{
		return (0);
	}

	/* Check if it's a leaf */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Check if both children exist and subtrees are perfect */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}

	return (0);

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
