#include "lists.h"

/**
 * add_nodeint - adds new node to the beginnig of a linked list
 * @head: head pointer
 * @n: the new note with an integer variable
 *
 * Return: address of the new node or NULL when the condition is not true
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newly_created_node; /* variable represnting the new created node */

	newly_created_node = malloc(sizeof(listint_t));

	if (newly_created_node == NULL)
		return (NULL);

	newly_created_node->n = n;
	newly_created_node->next = *head;
	*head = newly_created_node;

	return (newly_created_node);
}
