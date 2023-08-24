#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal
 * @tree: points to root of tree
 * @func: points to function that calls node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func don't exist */
	if (tree == NULL || func == NULL)
		return;

	/* Visit left side */
	binary_tree_postorder(tree->left, func);

	/* Visit right side */
	binary_tree_postorder(tree->right, func);

	/* Visit middle */
	func(tree->n);
}
