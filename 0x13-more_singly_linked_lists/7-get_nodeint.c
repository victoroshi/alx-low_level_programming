#include "lists.h"

/**
 * get_nodeint_at_index - return node at a particuar index
 * @head: the start of a singly linked list
 * @index: an integer to be returned
 *
 * Return: listint_t am index to be returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while ((i < index) && (head))
	{
		head = head->next;
		i++;
	}

	return (head);
}
