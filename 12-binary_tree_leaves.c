#include "binary_trees.h"
/**
 * binary_tree_leaves - counting how many leves in a tree
 * @tree: tree
 * Return: leaves count
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lt;
	size_t rt;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lt = binary_tree_leaves(tree->left);
	rt = binary_tree_leaves(tree->right);

	return (lt + rt);
}
