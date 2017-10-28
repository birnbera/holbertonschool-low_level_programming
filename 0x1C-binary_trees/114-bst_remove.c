#include "binary_trees.h"

/**
 * bst_search - search for value in binary search tree
 * @tree: root of tree to search
 * @value: value to search for
 *
 * Return: pointer to node containing value, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *) tree);
	else if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}

/**
 * bst_remove - remove node from binary search tree with value equal to `value`
 * @root: root of tree from which to remove node
 * @value: value of node to remove
 *
 * Return: pointer to new root of tree
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t **parent, *child, *to_remove = bst_search(root, value);

	if (to_remove == NULL)
		return (root);
	if (to_remove->parent != NULL)
	{
		if (to_remove == to_remove->parent->left)
			parent = &to_remove->parent->left;
		else
			parent = &to_remove->parent->right;
	}
	if (to_remove->right == NULL)
	{
		if (to_remove->left == NULL)
		{
			if (to_remove->parent == NULL)
			{
				free(to_remove);
				return (NULL);
			}
			*parent = NULL;
			free(to_remove);
			return (root);
		}
		else
		{
			to_remove->left->parent = to_remove->parent;
			if (to_remove->parent == NULL)
			{
				root = to_remove->left;
				free(to_remove);
				return (root);
			}
			*parent = to_remove->left;
			free(to_remove);
			return (root);
		}
	}
	else
	{
		child = to_remove->right;
		while (child->left != NULL)
			child = child->left;
		to_remove->right->parent = child;
		to_remove->left->parent = child;
		child->parent->left = child->right;
		if (child->right != NULL)
			child->right->parent = child->parent;
		child->left = to_remove->left;
		child->right = to_remove->right;
		child->parent = to_remove->parent;
		if (to_remove->parent == NULL)
		{
			free(to_remove);
			return (child);
		}
		free(to_remove);
		*parent = child;
		return (root);
	}
}
