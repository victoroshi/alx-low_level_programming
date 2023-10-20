#include "lists.h"

/**
 * list_len - print the lenght of a string
 * @h: a pointer to a singly-linked
 *
 * Return: the number of node in size_t
 */
size_t list_len(const list_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		h = h->next;
	}

	return (s);
}
