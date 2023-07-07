#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to  head
 * @index: index to be deleted
 *
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	for (; curr && i < index - 1; i++)
		curr = curr->next;
	if (!curr || !(curr->next))
		return (-1);
	temp = curr->next;
	curr->next = curr->next->next;
	free(temp);

	return (1);
}
