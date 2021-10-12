#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height, height, size;

if (!tree)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
height = left_height + right_height;
size = binary_tree_size(tree);

/*if (size == (2 << height) - 1), return 1*/

if (size == (1 << height) && left_height == right_height)
return (1);
else
return (0);
} /* end of binary_tree_is_perfect */

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
int left_height, right_height;

if (!tree)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
} /* end of binary_tree_height */

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{

size_t size = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

return (size);
} /* end of binary_tree_size */

