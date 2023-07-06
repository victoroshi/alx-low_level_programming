#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: this is the pointer to te head of the lict
 *
 * Return: node counts in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}

	return (count_nodes);
}
