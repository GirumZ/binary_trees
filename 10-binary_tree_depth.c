#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binary tree
 * @tree: the head of the binary tree
 * Return: the depthe of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
