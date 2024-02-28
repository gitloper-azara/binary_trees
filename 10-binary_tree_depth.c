#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	if (!tree)
		return (0);

	/* traverse up the tree until reaching the root */
	while (current->parent)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
