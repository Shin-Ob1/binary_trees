#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to store in new node
 *
 * Return: pointer to new node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL || parent == NULL)
		return (NULL);
	if (parent->right != NULL)
		newnode->right = parent->right;
	else
		newnode->right = NULL;
	parent->right = newnode;
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;

	return (newnode);
}
