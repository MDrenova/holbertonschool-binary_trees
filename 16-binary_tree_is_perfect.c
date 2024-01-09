#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * A binary tree is perfect if all its levels are completely filled.
 * If 'tree' is NULL, it returns 0.
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
			return (1);
	}

	return (0);
}
