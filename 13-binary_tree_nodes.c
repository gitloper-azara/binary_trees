#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: total count of nodes with at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, left_count, right_count;

	if (!tree)
		return (0);

	/* count the current node if it has at least one child */
	count = (tree->left || tree->right) ? 1 : 0;

	/*
	 * recursively count the nodes with at least one child in the left
	 * and right subtrees
	 */
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (count + left_count + right_count);
}
