#include "binary_trees.h"

/**
 * binary_tree_delete - function (void)
 *	- deletes an entire binary tree
 * @tree: argument of type 'binary_tree_t *'
 *	- pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
