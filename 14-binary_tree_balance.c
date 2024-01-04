#include "binary_trees.h"
/**
 * tree_height - measure height plus one
 * @tree: tree
 * Return: size_t
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t lt;
	size_t rt;

	if (tree == NULL)
		return (0);
	lt = tree_height(tree->left);
	rt = tree_height(tree->right);

	if (lt > rt)
		return (lt + 1);
	else
		return (rt + 1);
}
/**
 * binary_tree_height - measure exact height
 * @tree: tree
 * Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht;

	ht = tree_height(tree);
	return (ht - 1);
}
/**
 * binary_tree_balance - measure tree balance
 * @tree: tree
 * Return: balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);

	lt = (int)binary_tree_height(tree->left);
	rt = (int)binary_tree_height(tree->right);
	return (lt - rt);
}
