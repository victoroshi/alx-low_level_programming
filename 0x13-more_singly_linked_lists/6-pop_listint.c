#include "lists.h"

/**
 * pop_listint - deletes thenhead of a linked list
 * @head:  head pointer to the linked list
 *
 * Return: the head  of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	int n;

	if (*head == NULL)
		return (0);

	curr_node = *head;
	n = curr_node->n;
	*head = curr_node->next;
	free(curr_node);

	return (n);
}
