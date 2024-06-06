#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-Order Traversal
 * @tree: The root of a binary tree
 * @func: A function to call on every node
 */

void	binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
