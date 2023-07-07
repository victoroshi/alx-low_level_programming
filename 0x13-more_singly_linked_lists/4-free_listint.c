#include "lists.h"

/**
 * free_listint - frees list like free()
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head != NULL)
	{
		free_list = head;
		head = head->next;
		free(free_list);
	}
}
