#include "binary_trees.h"

/**
 * binary_tree_height - Function to calculate height if binary tree
 * @tree: Pointer to root node to measure height
 *
 * Return: -1 if tree height is empty
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t greater_height;
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (size_t)(-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		greater_height = left_height;
	else
		greater_height = right_height;

	return (greater_height + 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to root node of tree to measure balance
 *
 * Return: If tree NULL, 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	int balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = (int)(left_height - right_height);

	return (balance_factor);
}
