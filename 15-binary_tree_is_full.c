#include "binary_trees.h"

/**
 * binary_tree_is_full - afunction that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise
*/

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* if node is a leaf node, it is automatically full */
	if (!(tree->left) && !(tree->right))
		return (1);

	/*
	 * if the node has exactly 2 children, recursively check its left
	 * and right subtrees
	 */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right));
	/* if node has only one child, tree is not full*/
	return (0);
}
