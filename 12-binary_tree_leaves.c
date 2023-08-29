#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 * Return: number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ltree, rtree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	ltree = binary_tree_leaves(tree->left);
	rtree = binary_tree_leaves(tree->right);

	return (ltree + rtree);
}
