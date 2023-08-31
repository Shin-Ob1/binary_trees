#include "binary_trees"

/**
 * array_to_bst - builds a Binary Search Tree
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 *
 * Return: pointer to the root node of the created BST
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t m, n;

	if (array == NULL)
		return (NULL);

	m = 0;
	while (n < size)
	{
		for (n = 0; n < m; n++)
		{
			if (array[n] == array[m])
				break;
		}
		if (n == m)
		{
			if (bst_insert(&tree, array[m]) == NULL)
				return (NULL);
		}
		m++;
	}

	return (tree);
}
