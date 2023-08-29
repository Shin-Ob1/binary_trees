#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_size(tree->left);
	rheight = binary_tree_size(tree->right);

	return (lheight + rheight + 1);
}
