#include "lists.h"

/**
 * listint_len - finds length of a linked list
 * @h: This is a pointer to a linked list
 *
 * Return: size_t, the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
