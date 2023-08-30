#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to store in new node
 *
 * Return: pointer to new node or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
