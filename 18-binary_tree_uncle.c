#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a node
 * @node: Pointer node to find the uncle
 *
 * Return: if node has no uncle or is NULL, NULL
 * Pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (node->parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
