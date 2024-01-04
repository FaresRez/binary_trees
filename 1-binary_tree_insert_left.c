#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a left node
 *
 * @parent: pointer of the parent node
 * @value: the value of the node
 * Return: NULL or the pointer to a node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);
	binary_tree_t *node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;

	}
	parent->left = node;
	return (node);
}
