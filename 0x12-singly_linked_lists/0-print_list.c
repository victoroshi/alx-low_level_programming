#include "lists.h"

/**
 * print_list - prints elements of a given list
 * @h: pointer to the list
 *
 * Return: size_t whic is the number of the node
 */
size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (s);
}
