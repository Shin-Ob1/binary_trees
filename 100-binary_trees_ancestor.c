#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent1, *parent2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	parent1 = first->parent;
	parent2 = second->parent;
	if (parent1 == parent2)
		return (parent1);
	if (!parent1)
		return (binary_trees_ancestor(first, parent2));
	if (!parent2)
		return (binary_trees_ancestor(parent1, second));

	return (binary_trees_ancestor(parent1, parent2));
}
