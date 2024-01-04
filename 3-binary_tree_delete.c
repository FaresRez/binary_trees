#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - delete a tree
 *
 * @tree: the pointer of the root
 * Return: NULL or the pointer to a node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
