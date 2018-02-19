#include "binary_trees.h"

/**
 * binary_tree_is_full - function to test whether a binary tree
 * pointed to by `tree` is full (i.e. all nodes have 0 or 2 children).
 * @tree: root of tree to check
 *
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);
	if (tree->left)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (1);
}
