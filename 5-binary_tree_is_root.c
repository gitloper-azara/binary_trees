#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* check if node has no parent */
	if (!(node->parent))
		/* return 1 if so. root found */
		return (1);
	/* return 0. node has a parent */
	return (0);
}
