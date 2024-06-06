#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the nodes with at least 1
 * child in a binary tree
 *
 * @tree: the pointer to the root node of the tree to count from
 *
 * Return: the number of node with a child
 * if the tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
