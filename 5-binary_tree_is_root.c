#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 *         If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node == NULL || node->parent != NULL) ? 0 : 1);
}
