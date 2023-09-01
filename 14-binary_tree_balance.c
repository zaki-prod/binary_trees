#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance factor
 *                       of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL, otherwise balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is null, otherwise height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft = 0;
	size_t rgt = 0;

	if (tree)
	{
		lft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rgt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lft > rgt) ? lft : rgt);
	}
	return (0);
}
