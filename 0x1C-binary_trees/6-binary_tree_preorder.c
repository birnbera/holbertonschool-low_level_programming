#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traverse of binary tree
 * @tree: starting point of traversal
 * @func: function to call on the value at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
