#include "binary_trees.h"
/**
 * binary_tree_size - measure tree size
 * @tree: tree
 * Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt;
	size_t rt;

	if (tree == NULL)
		return (0);
	lt = binary_tree_size(tree->left);
	rt = binary_tree_size(tree->right);

	return (lt + rt + 1);
}
