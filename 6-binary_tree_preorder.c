#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* call the function for the current node */
	func(tree->n);
	/* traverse the left subtree */
	binary_tree_preorder(tree->left, func);
	/* traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
