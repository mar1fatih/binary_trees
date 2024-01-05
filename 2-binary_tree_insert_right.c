#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserting on right
 * @parent: parent
 * @value: element value
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	if (!parent)
	{
		newnode->n = value;
		newnode->parent = NULL;
		newnode->left = NULL;
		newnode->right = NULL;
		if (parent->right != NULL)
		{
			temp = parent->right;
			parent->right = newnode;
			temp->parent = newnode;
			newnode->right = temp;
		}
		else
			parent->right = newnode;
		return (newnode);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newnode;
		temp->parent = newnode;
		newnode->right = temp;
	}
	else
		parent->right = newnode;
	return (newnode);
}
