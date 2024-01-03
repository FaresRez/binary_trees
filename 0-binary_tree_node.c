#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 *
 * @parent: pointer of the parent node
 * @value: the value of the node
 * Return: NULL or the pointer to a node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
