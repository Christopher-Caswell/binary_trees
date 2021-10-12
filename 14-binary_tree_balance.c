#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor
* Return: The balance factor of the tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{

int left_height, right_height, balance;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
balance = left_height - right_height;

return (balance);
} /* end of binary_tree_balance */

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
* Return: The height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
} /* end of binary_tree_height */
