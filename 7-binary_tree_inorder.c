#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a tree using in order traversal
 * @tree: pointer to root of tree
 * @func: pointer to function to call each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func doesn't exist */
	if (func == NULL || tree == NULL)
		return;

	/* Traverse smaller numbers (left) */
	binary_tree_inorder(tree->left, func);

	/* Visit middle number */
	func(tree->n);

	/* Traverse larger numbers (right) */
	binary_tree_inorder(tree->right, func);
}
