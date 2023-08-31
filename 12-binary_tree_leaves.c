#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: o if tree is NULL, otherwise num of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leaves = 0;

		leaves += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		return (leaves);
	}
	return (0);
}
