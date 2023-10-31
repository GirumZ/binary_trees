#include "binary_trees.h"

/**
 * binary_tree_is_root - checks is a node is root or not
 * @node: the node to be checked
 * Return: 1 if node is root and 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
