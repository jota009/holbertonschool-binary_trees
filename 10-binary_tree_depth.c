#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure depth
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);

	current = tree;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
