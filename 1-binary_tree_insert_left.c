#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 *
 * @parent: the parent node
 *
 * @value: the value to be inserted to the new node
 *
 * Return: pointer to the new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_node;

	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}

	return (new_node);
}
