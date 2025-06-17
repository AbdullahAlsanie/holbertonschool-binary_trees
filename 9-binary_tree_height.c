#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: measures the height of a binary tree or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	return (1 + (height1 > height2 ? height1 : height2));
}
