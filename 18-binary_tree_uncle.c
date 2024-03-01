#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	/* if the node is a child of its parent or if parent itself */
	if (!(parent->left) || !(parent->right))
		return (NULL);

	/* check if the node is the left child of its parent */
	if (parent->left == node)
		/* return the right child of the parent (sibling) */
		return (parent->right);

	/* check if the node is the right child of its parent */
	if (parent->right == node)
		/* return the left child of the parent (sibling) */
		return (parent->left);

	return (NULL);
}

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	/* check if the node is the left child of its parent */
	if (!(parent->parent))
		return (NULL);

	return (binary_tree_sibling(parent));
}
