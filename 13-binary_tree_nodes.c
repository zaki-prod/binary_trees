#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with at least 1 child
 *                     in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL, otherwise num of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t nodes = 0;

		nodes += (tree->left != NULL || tree->right != NULL) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		return (nodes);
	}
	return (0);
}
