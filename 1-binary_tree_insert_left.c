#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer of new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = malloc(sizeof(binary_tree_t));

	if (newLeft == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	newLeft->n = value;
	newLeft->parent = parent;
	newLeft->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = newLeft;
		newLeft->left = parent->left;
		parent->left = newLeft;
	}
	return (newLeft);
}
