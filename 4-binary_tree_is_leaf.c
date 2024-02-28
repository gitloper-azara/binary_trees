#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* check if node has no left and right children */
	if (!(node->left) && !(node->right))
		/* return 1 if there are no children on either flank */
		return (1);
	/* return 0 if there are children on either flank */
	return (0);
}
