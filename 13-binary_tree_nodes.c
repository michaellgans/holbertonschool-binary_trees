#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 leaf
 * @tree: points to the root of the branch
 * Return: 0 if tree doesn't exist
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_side = binary_tree_nodes(tree->left);
	right_side = binary_tree_nodes(tree->right);

	return (left_side + right_side + 1);
}
