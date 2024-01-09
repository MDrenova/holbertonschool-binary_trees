#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * This function finds the uncle of a node in a binary tree.
 * A node's uncle is the sibling of its parent.
 * If 'node' is NULL, or the node has no uncle, it returns NULL.
 * Return: Pointer to the uncle node, or NULL if there is no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
