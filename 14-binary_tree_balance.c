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


	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	return (1 + (height1 > height2 ? height1 : height2));
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int sum;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	sum = (int)left_height - (int)right_height;

	return (sum);
}
