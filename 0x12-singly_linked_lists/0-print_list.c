#include "lists.h"

/**
 * print_list - print  element in the list
 * @h: pointer
 *
 * Return: nodes numbers
 */
size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		num_node++;
	}

	return (num_node);
}
