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
	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);

	/* return the max height between the left and right subtrees, plus 1 */
	/* plus 1 is the current node */
	return (max(left_height, right_height));
}

/**
 * binary_tree_balance - a function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
*/

size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	/* recursively calc the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
