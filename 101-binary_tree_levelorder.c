#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 *
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 *
 * Return: absolutely nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *current, *que[100];
	int front = 0, rear = 0;

	if (!tree || !func)
		return;
	que[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = que[front++];
		func(current->n);
		if (current->left)
			que[rear++] = current->left;
		if (current->right)
			que[rear++] = current->right;
	}
}
