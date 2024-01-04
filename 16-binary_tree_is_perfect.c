#include "binary_trees.h"
/**
 * tree_height - check the code
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
 * binary_tree_height - check the code
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
 * binary_tree_balance - check the code
 * @tree: tree
 * Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	return (lt - rt);
}
/**
 * binary_tree_is_full - check the code
 * @tree: tree
 * Return: int
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
/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: tree to be checked
 * Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int fl, bl;

	if (tree == NULL)
		return (0);

	fl = binary_tree_is_full(tree);
	bl = binary_tree_balance(tree);

	if (fl == 1 && bl == 0)
		return (1);
	else
		return (0);
}
