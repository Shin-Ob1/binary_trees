#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary search tree
 *
 * @tree: pointer to the root node of the BST
 * @value: value to search for in the BST
 *
 * Return: pointer to the node containing the value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		else
			return (bst_search(tree->right, value));
	}
	return (NULL);
}
