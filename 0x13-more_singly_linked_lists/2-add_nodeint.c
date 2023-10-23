#include "lists.h"

/**
 * add_nodeint - adds new node to the beginning of a linked listint
 * @head:  this is the start of a singly-linked listint
 * @n: this is an integer expected to be added
 *
 * Return: the pointer to the lintint
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
