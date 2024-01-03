#include "binary_trees.h"
/**
 * binary_tree_depth - measure tree depth
 * @tree: tree
 * Return: size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
