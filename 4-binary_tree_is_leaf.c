#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks a node to see if it's a leaf
 * @node: pointer to node to check
 * Return: 1 if leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if node exists */
	if (node == NULL)
		return (0);

	/* Check if right and left are NULL */
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
