#include "binary_trees.h"
/**
* binary_tree_is_leaf - Checks if a node is a leaf
* @node: Pointer to the node to check
* This function checks if a node is a leaf in a binary tree.
* A node is considered a leaf if both its left and right children are NULL.
* If the node itself is NULL, it is not considered a leaf.
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
