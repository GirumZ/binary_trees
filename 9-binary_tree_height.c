#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: the root of the tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max(left_height, right_height) + 1);
}

/**
 * max - compares two integers and return the maximum
 * @a: the first integer
 * @b: the second integer
 * Return: the maximum integer
 */

int max(int a, int b)
{
	return (a > b ? a : b);
}
