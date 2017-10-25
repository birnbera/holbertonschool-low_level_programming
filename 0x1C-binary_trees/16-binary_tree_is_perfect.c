#include "binary_trees.h"

#define max(a, b) ((a) >= (b) ? (a) : (b))

/**
 * height - measure the height of a binary tree
 * @tree: root of tree to measure
 *
 * Return: integer height of tree or 0 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + max(height(tree->left),
			height(tree->right)));
}

/**
 * binary_tree_balance - compute balance factor for a binary tree
 * @tree: root of tree to measure balance factor of
 *
 * Return: integer balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((height(tree->left) + (tree->left != NULL))
		- (height(tree->right) + (tree->right != NULL)));
}

/**
 * binary_tree_is_perfect - check whether binary tree is perfect
 * (i.e. all non-leaf nodes have 2 children and tree is balanced)
 * @tree: tree to check
 *
 * If binary tree is balanced at each node then it is perfect.
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (1 && (binary_tree_balance(tree->left)
		      == binary_tree_balance(tree->right)));
}
