#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: New node with value
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocate memory for the new node*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/*Check if allocation was succesful*/
	if (new_node == NULL)
		return (NULL);

	/*Initialize new node's properties*/
	/*Set the value*/
	new_node->n = value;
	/*Set the parent pointer*/
	new_node->parent = parent;
	/*Initialize left child to NULL*/
	new_node->left = NULL;
	new_node->right = NULL;

	/*Retunr the pointer to the new node*/
	return (new_node);
}
