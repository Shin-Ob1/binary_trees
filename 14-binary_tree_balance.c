#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: measures the height of a binary tree
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight, max;

	if (!tree)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	max = lheight >= rheight ? lheight : rheight;

	return (max + 1);
}

/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: the balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return (lheight - rheight);
}
