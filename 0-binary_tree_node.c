#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer of the parent node to creat
 * @value: value to put in the new node
 * Return: pointer of new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
