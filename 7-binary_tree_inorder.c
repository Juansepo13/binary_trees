#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to function to call for each node.
 * Return: Void. Nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Inorder (Left, Root, Right) */
	if (tree && func)
	{
		/* first recur on left child */
		binary_tree_inorder(tree->left, func);
		/* root */
		func(tree->n);
		/* now recur on right child */
		binary_tree_inorder(tree->right, func);
	}
}
