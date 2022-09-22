#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}
	return (0);
}
