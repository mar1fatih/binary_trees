#include "binary_trees.h"
/**
 * binary_tree_is_full - check tree if it full
 * @tree: tree
 * Return: 1 if full, 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);

	lt = binary_tree_is_full(tree->left);
	rt = binary_tree_is_full(tree->right);

	if (rt == lt)
		return (1);
	else
		return (0);
}
