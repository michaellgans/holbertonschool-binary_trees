#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: points to the node to find the sibling of
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Node doesn't exist */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}
