#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: The depth, If tree is NULL 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - Recursively checks if tree is perfect
 * @tree: Current node
 * @depth: Expected depth of leaves
 * @level: Current node level
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect or 0 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_tree;

	if (tree == NULL)
	{
		return (0);
	}

	depth_tree = binary_tree_depth(tree);

	return (is_perfect(tree, depth_tree, 0));
}
