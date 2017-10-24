#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: pointer to lowest common ancestor, or NULL if none exists
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *) first);
	if (first->parent == second)
		return ((binary_tree_t *) second);
	if (second->parent == first)
		return ((binary_tree_t *) first);
	if (first->parent == NULL && second->parent != NULL)
		return (binary_trees_ancestor(first, second->parent));
	if (second->parent == NULL && first->parent != NULL)
		return (binary_trees_ancestor(first->parent, second));
	return (binary_trees_ancestor(first->parent, second->parent));
}
