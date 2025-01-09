#include "binary_trees.h"

/**
 * binary_tree_insert_right -
 *                          Inserts a node as the right-child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the created node,
 *         or NULL on failure or if parent is NULL.
 *
 * Description: If the parent already has a right child, the new node takes its
 *              place, and the old right child becomes the right child of the
 *              new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Step 1: Validate input */
	if (parent == NULL)
	{
		return (NULL);
	}

	 /* Step 2: Create the new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Step 3: Adjust child relationships */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	/* Step 4: Return the new node */
	return (new_node);
}
