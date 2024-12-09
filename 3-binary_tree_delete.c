#include "binary_trees.h"

/**
 *binary_tree_delete - that deletes an entire binary tree
 *@tree: tree to free
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
