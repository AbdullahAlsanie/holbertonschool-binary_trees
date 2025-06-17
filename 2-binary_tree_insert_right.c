#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer of new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRight;

	if (parent == NULL)
		return (NULL);
	newRight = malloc(sizeof(binary_tree_t));
	if (newRight == NULL)
		return (NULL);

	newRight->n = value;
	newRight->parent = parent;
	newRight->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newRight;
		newRight->right = parent->right;
		parent->right = newRight;
	}
	else
	{
		parent->right = newRight;
		newRight->right = NULL;
	}
	return (newRight);
}
