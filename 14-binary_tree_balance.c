#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree : pointer to the root node of the tree to measure the height
 * Return: The height of the tree, 0otherwise
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - function to measures the balance
 * factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 * Return: tree is NULL, return 0
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	else
		left_height = -1;

	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		right_height = -1;

			return (left_height - right_height);
}
