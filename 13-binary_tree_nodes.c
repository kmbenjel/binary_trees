#include <stdio.h>
#include <stdlib.h>
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
	size_t node_1_child = 0;

	if (!tree)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		(node_1_child += 1);

	node_1_child += binary_tree_nodes(tree->left);
	node_1_child += binary_tree_nodes(tree->right);
	return (node_1_child);

}
