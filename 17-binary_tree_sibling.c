#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !(node->parent))
		return (NULL);

	/* check if the node is the left child of its parent */
	if (parent->left == node)
		/* return the right child of the parent (sibling) */
		return (parent->right);

	/* check if the node is the right child of its parent */
	if (parent->right == node)
		/* return the left child of the parent (sibling) */
		return (parent->left);

	/* if the node is a child of its parent or if parent itself */
	return (NULL);
}
