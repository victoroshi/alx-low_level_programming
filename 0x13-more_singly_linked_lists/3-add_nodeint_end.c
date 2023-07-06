#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head pointer
 * @n: expected data to be added to the head
 * Return: newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *c; /* n_node is new node, c = current */

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	c = *head;

	while (c->next != NULL)
		c = c->next;
	c->next = n_node;

	return (n_node);
}
