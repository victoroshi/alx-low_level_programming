#include "lists.h"

/**
 * print_listint - print the elements in a listint_t list
 * @h: a pointer to a singly-linked listint_t list
 *
 * Return: size_t, the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t list;

	for (list = 0; h != NULL; list++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (list);
}
