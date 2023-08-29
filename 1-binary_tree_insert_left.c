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

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL || parent == NULL)
		return (NULL);
	if (parent->left != NULL)
		newnode->left = parent->left;
	else
		newnode->left = NULL;
	parent->left = newnode;
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;

	return (newnode);
}
