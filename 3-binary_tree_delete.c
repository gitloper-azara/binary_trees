#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* recursively delete the left subtree */
	binary_tree_delete(tree->left);
	/* recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* free the memory allocated for the current node */
	free(tree);
}
