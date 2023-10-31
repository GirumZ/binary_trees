#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: the root of the tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (max(left, right));
	}
	return (0);
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
