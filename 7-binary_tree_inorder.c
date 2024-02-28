#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that goes through a binary tree using
 * in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* traverse the left subtree */
	binary_tree_inorder(tree->left, func);
	/* call the function for the current node */
	func(tree->n);
	/* traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
