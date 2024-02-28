#include "binary_trees.h"

/**
 * max - a function that returns the greatest of two arguments
 * @a: argument to compare
 * @b: argument to compare
 * Return: max integer
*/

size_t max(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	/* recursively calc the height of the left and right subtrees */
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* return the max height between the left and right subtrees, plus 1 */
	/* plus 1 is the current node */
	return (max(left_height, right_height));
}
