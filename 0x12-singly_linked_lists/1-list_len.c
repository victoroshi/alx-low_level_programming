#include "lists.h"

/**
 * list_len - prints out the  number of elements in the singly linked list
 * @h: pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_node++;
	}

	return (num_node);
}
