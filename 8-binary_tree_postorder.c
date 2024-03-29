#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree using
 * post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* traverse the left subtree */
	binary_tree_postorder(tree->left, func);
	/* traverse the right subtree */
	binary_tree_postorder(tree->right, func);
	/* call the function for the current node */
	func(tree->n);
}
