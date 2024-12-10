#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: pointer to the root
 * Return: the height of the tree, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binarytree is full
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left != height_right)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	return (0);
}
