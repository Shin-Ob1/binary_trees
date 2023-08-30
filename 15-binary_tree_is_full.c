#include "binary_trees.h"

/**
 * binary_tree_leaf_check - checks if node isleaf node
 * @node: node to check
 * Return: 1 if leaf and 0 if not
 */
int binary_tree_leaf_check(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: (1) if tree is full else (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ltree, rtree;

	if (!tree)
		return (0);
	if (binary_tree_leaf_check(tree))
		return (1);
	ltree = binary_tree_is_full(tree->left);
	rtree = binary_tree_is_full(tree->right);

	return (ltree && rtree);
}
