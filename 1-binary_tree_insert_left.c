#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the created node (Success) or
 *		NULL (Failure or if @parent is NULL)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);

	leftNode = binary_tree_node(parent, value);

	if (leftNode == NULL)
		return (NULL);

	leftNode->left = parent->left;

	if (leftNode->left != NULL)
		leftNode->left->parent = leftNode;

	parent->left = leftNode;
	return (leftNode);
}
