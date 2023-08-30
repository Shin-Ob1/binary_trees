#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: the balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		lheight = 0;
	else
		lheight = binary_tree_balance(tree->left) + 1;
	if (tree->right == NULL)
		rheight = 0;
	else
		rheight = binary_tree_balance(tree->right) + 1;

	return (lheight - rheight);
}
