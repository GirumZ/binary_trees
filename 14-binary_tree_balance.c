#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: the root of the binary tree
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);

}

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

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
