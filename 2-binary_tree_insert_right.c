#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function to insert a node as the right-child
 * @parent: the parent of the new node
 * @value: the data for the new node
 *
 * Return: the new node if successfull and NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
