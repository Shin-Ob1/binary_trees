#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least one child in a binary tree
 *
 * @tree: pointer to the root node
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ltree, rtree;

	if (tree == NULL)
		return (0);
	ltree = binary_tree_nodes(tree->left);
	rtree = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + ltree + rtree);

	return (0);
}
