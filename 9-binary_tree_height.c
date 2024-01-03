#include "binary_trees.h"
/**
 * tree_height - measure hight plus 1
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
 * binary_tree_height - measuring a tree height
 * @tree: tree
 * Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht;

	ht = tree_height(tree);
	return (ht - 1);
}
