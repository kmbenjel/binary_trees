#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node
 *
 * @parent: Pointer to the parent node
 * @value: The node value
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
