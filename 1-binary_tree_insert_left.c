#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the
 * + left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 *
 * Return: binary_tree_t (a pointer to the created node or NULL)
 *
 * Description: If error occur return NULL.
 *              If parent is NULL return Null.
 *              If parent already has a left-child,
 *             + the new node must take its place,
 *             + and the old left-child must be set as
 *             + the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/* Swap the new node to the leftmost */
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	/* Return pointer to the new node */
	return (new);
}
