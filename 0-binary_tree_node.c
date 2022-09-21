#include "binary_trees.h"

/**
 * binary_tree_node - Function that create a binary tree node
 * @parent: A pointer parameter for the parent of the new node
 * @value: The new node value
 *
 * Return: binary_tree_t (A poiter to the new node or none)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
