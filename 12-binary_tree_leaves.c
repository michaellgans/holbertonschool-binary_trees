#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a tree
 * @tree: points to the root of a tree
 * Return: 0 if tree doesn't exist
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_side, left_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_leaves(tree->right);
	right_side = binary_tree_leaves(tree->left);

	return (left_side + right_side);
}
