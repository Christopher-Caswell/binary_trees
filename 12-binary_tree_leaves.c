#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves of a binary tree
* @tree: Pointer to the root node of the tree to traverse
* Return: Number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{

size_t left_leaves, right_leaves;
size_t leaves = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);
leaves = left_leaves + right_leaves;
return (leaves);
} /* end of binary_tree_leaves */
