#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: points to the parent node
 * @value: value stored inside the node
 * Return: address of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Declare and Initialize Variables */
	binary_tree_t *new_node;

	/* If there is no parent */
	if (parent == NULL)
		return (NULL);

	/* Allocate Memory for New Node */
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Set values for new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	/* Update existing left child's parent to new_node */
	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
