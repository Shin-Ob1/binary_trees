#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if complete, otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int null_child = 0, front = 0, rear = 0;
	binary_tree_t *que[100], *current;

	if (tree == NULL)
		return (0);
	que[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		current = que[front++];
		if (null_child && (current->left || current->right))
			return (0);
		if (!current->left && current->right)
			return (0);
		if (current->left)
			que[rear++] = current->left;
		else
			null_child = 1;
		if (current->right)
			que[rear++] = current->right;
		else
			null_child = 1;
	}
	return (1);
}
