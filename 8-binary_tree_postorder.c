#include "binary_trees.h"

/**
 * binary_tree_postorder -
 *                        Goes through a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses the left subtree, then the right
 * subtree, and finally visits the current node. The value of each visited
 * node is passed as an argument to the function pointed to by `func`.
 *
 * Return: Nothing. If `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Visit the current node */
	func(tree->n);
}
