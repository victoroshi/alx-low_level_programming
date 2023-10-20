#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer to a singly-linked list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
