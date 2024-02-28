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
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
*/

size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = binary_tree_height(tree->left);
	size_t height_right = binary_tree_height(tree->right);

	if (!tree)
		return (0);

	/* check if tree is full */
	if (!(tree->left) && !(tree->right))
		return (1);

	if (height_left == height_right)
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));

	return (0);
}
