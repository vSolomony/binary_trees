#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height, right_height;

		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}
	return (0);
}
