#include "binary_trees.h"
/**
* binary_tree_is_root - Checks if a node is a root
* @node: Pointer to the node to check
* A node is considered a root if its parent is NULL.
*If the node itself is NULL, it is not considered a root.
* Return: 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
