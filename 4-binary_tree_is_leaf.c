#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check a node is a leaf
 * @node: node to be checked
 * Return: 1 if its a leaf 0 if its not
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
