#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserting on left
 * @parent: parent
 * @value: element value
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode || parent == NULL)
		return (NULL);
	if (!parent)
	{
		newnode->n = value;
		newnode->parent = NULL;
		newnode->left = NULL;
		newnode->right = NULL;
		if (parent->left != NULL)
		{
			temp = parent->left;
			parent->left = newnode;
			temp->parent = newnode;
			newnode->left = temp;
		}
		else
			parent->left = newnode;
		return (newnode);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newnode;
		temp->parent = newnode;
		newnode->left = temp;
	}
	else
		parent->left = newnode;
	return (newnode);
}
