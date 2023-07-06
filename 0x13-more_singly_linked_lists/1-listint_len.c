#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: pointer  to the head
 *
 * Return: counts
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
