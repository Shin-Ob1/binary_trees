#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation
 * on a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *nroot;

	if (!tree || !tree->right)
		return (tree);
	nroot = tree->right;
	tree->parent = nroot;
	tree->right = nroot->left;
	nroot->left = tree;
	nroot->parent = NULL;

	return (nroot);
}
