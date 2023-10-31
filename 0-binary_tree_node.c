#include "binary_trees.h"

/**
 * binary_tree_node - a function to create a new node
 * @parent: the parent of the new node
 * @value: the data for the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		parent = new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
