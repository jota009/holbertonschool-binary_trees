#include "binary_trees.h"

/**
 * binary_tree_depth - Checks tree depth
 * @tree: Pointer node to check tree
 *
 * Return: Depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect - Helper function to check if tree is perfect
 * @depth: Measures depth of tree
 * @level: Levels to tranverse in tree to check if perfec
 * @tree: Pointer node to check tree
 *
 * Return: 1 if tree is perfect
 */

int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to root node of tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}

