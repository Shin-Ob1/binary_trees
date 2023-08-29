#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: measures the height of a binary tree
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		lheight = 0;
	else
		lheight = binary_tree_height(tree->left) + 1;
	if (tree->right == NULL)
		rheight = 0;
	else
		rheight = binary_tree_height(tree->right) + 1;
	if (lheight > rheight)
		return (lheight);
	return (rheight);
}
