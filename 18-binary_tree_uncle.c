#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node)
		return (NULL);

	if (!node->parent || !node->parent->parent)
			return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);

	if (grandparent->right == parent)
		return (grandparent->left);

	else
		return (NULL);
}
