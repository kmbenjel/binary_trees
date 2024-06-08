#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */

size_t	binary_tree_height(const binary_tree_t *tree)
{
	size_t	lef = 0, rig;

	if (tree)
	{
		lef = 0, rig = 0;
		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}


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
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
