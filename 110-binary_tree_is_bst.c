#include "binary_trees.h"


/**
 * is_bst - utility for bst checker
 *
 * @node: input node
 * @prev: previously checked node
 *
 * Return: 0 or 1
 */

int is_bst(const binary_tree_t *node, const binary_tree_t *prev)
{
	if (node == NULL)
		return (1);
	if (!is_bst(node->left, prev))
		return (0);
	if (prev != NULL && node->n <= prev->n)
		return (0);

	return (is_bst(node->right, node));
}

/**
 * binary_tree_is_bst - checks if a binary tree is bst
 *
 * @tree: pointer to binary tree to be checked
 * Return: 1 if true, otherwise 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, NULL) ? 1 : 0);
}
