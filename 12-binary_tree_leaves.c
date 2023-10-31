#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the root of a binary tree
 * Return: the number of leaf nodes in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (tree)
	{
		count_leaves += (!tree->left && !tree->right) ? 1 : 0;
		count_leaves += binary_tree_leaves(tree->left);
		count_leaves += binary_tree_leaves(tree->right);
	}
	return (count_leaves);
}
