#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node.
 * @node: Pointer to the node to check.
 * @parent: Pointer to parent node of node to create.
 * @value: Value to put in new node.
 * Return: Pointer to new node. NULL on failure.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
