#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a right node
 *
 * @parent: pointer of the parent node
 * @value: the value of the node
 * Return: NULL or the pointer to a node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;

	}
	parent->right = node;
	return (node);
}
