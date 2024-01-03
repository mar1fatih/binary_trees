#include "binary_trees.h"
/**
 * binary_tree_is_root - check the node if a root
 * @node: node to be checked
 * Return: 1 if root, 0 if not root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
