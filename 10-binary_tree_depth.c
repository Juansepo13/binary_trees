#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int tree_depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		tree_depth = 1 + binary_tree_depth(tree->parent);
	return (tree_depth);
}