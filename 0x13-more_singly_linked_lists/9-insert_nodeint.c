#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the start of the list
 * @idx: the point where node is expected to be added
 * @n: integer value to store the new node
 *
 * Return: listint_t, the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *var;
	unsigned int i = 0;

	var = *head;
	if (*head == NULL)
		return (NULL);
	while ((i < idx) && (head != NULL))
	{
		var = (var)->next;
		i++;
		if (i == (idx - 1)) /* holding address of previous node */
			temp = var;
	}
	if (head == NULL)
		return (NULL);
	if (i == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		if (idx == 0)
			*head = new_node;
		new_node->next = var;
		new_node->n = n;
		if (idx > 0)
			temp->next = new_node; /* previous node ->next to new */
		return (new_node);
	}
	return (NULL);
}
