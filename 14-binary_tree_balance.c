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

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return (lheight - rheight);
}
