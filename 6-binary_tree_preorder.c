#include "binary_trees.h"

/**
 * binary_tree_preorder - move through tree using pre-order
 * @tree: pointer to root node
 * @func: calls each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Create current pointer */
	char *current;

	/* If tree or func doesn't exist */
	if (func == NULL || tree == NULL)
		return;

	/* Visit the current node */
	func(tree->n);

	/* Traverse left */
	binary_tree_preorder(tree->left, func);

	/* Traverse right */
	binary_tree_preorder(tree->right, func);
}
