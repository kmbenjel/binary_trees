#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-Order Traversal
 * @tree: The root of a binary tree
 * @func: A function to call on every node
 */

void	binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
