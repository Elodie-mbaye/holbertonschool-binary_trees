#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count number of leaves
 *
 * Return: if tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_right = 0, leaf_left = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaf_right = binary_tree_leaves(tree->right);
	leaf_left = binary_tree_leaves(tree->left);

	return (leaf_left + leaf_right);
}
