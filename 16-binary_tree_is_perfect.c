#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: 1 if leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left != NULL || node->right != NULL))
		return (0);
	return (1);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (!binary_tree_balance(tree))
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
