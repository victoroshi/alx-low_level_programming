#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a particular position
 * @head: head pointer
 * @index: list index where node will be added
 * @n: hold data for the new node
 *
 * Return: address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *n_node;
	listint_t *temp;
	unsigned int i;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	temp = *head;
	i = 0;
	if (*head == NULL && index > 0)
	{
		free(n_node);
		return (NULL);
	}
	if (index == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL && index - i > 0)
		{
			free(n_node);
			return (NULL);
		}
		i++;
	}
	n_node->next = temp->next;
	temp->next = n_node;
	return (n_node);
}
