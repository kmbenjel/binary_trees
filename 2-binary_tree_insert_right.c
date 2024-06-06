#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a right child
 * @value: the node's value
 * @parent: the parent
 * Return: the new right child
 */

binary_tree_t	*binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t	*right;

	if (!parent)
		return (NULL);
	right = malloc(sizeof(binary_tree_t));
	if (!right)
		return (NULL);
	right->n = value;
	right->parent = parent;
	right->left = NULL;
	right->right = parent->right;
	parent->right = right;
	return (right);
}
