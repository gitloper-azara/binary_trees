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

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaf nodes
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (!tree)
		return (0);

	/* count leaf nodes in increments */
	if (binary_tree_is_leaf(tree))
		return (1);

	left_leaves = tree->left ? binary_tree_leaves(tree->left) : 0;
	right_leaves = tree->right ? binary_tree_leaves(tree->right) : 0;

	return (left_leaves + right_leaves);
}
