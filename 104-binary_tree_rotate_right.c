#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation
 * on a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nroot;

	if (!tree || !tree->left)
		return (tree);
	nroot = tree->left;
	tree->parent = nroot;
	tree->left = nroot->right;
	nroot->right = tree;
	nroot->parent = NULL;

	return (nroot);
}
