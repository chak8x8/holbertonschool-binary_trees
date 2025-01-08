#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL.
 *
 * Description: If the parent already has a left child, the new node takes its
 *              place, and the old left child becomes the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Step 1: Validate input */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Step 2: Create the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Step 3: Adjust child relationships */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	/* Step 4: Return the new node */
	return (new_node);
}
