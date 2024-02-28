#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);

	/* recursively calc the size of the left and right subtrees */
	left_size = tree->left ? binary_tree_size(tree->left) : 0;
	right_size = tree->right ? binary_tree_size(tree->right) : 0;

	return (left_size + 1 + right_size);
}
