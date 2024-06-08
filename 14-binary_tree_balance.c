#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: root node
 * Return: Integer
 */

int	binary_tree_balance(const binary_tree_t *tree)
{
	int	lh;
	int	rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->left);
	return (lh - rh);
}
