#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of `parent`
 * @parent: parent of new node
 * @value: integer value to store in new node
 *
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
