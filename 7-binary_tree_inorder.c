#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function visits the left subtree, then the current
 * node, and finally the right subtree. The value of each visited node is
 * passed as an argument to the function pointed to by `func`.
 *
 * Return: Nothing. If `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit the current node */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
