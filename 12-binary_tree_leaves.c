#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  a pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves in the binary tree, if tree is NULL 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (leaves);

	if (binary_tree_is_leaf(tree))
		leaves++;
	leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
