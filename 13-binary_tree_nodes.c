#include "binary_trees.h"
/**
 * binary_tree_nodes - counting node with childrens
 * @tree: tree
 * Return: nodes count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lt;
	size_t rt;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lt = binary_tree_nodes(tree->left);
	rt = binary_tree_nodes(tree->right);

	return (lt + rt + 1);
}
