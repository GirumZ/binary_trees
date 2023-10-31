#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: the root of the binary tree
 * Return: the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	count++;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count);

}
