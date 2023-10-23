#include "lists.h"

/**
 * pop_listint - deletes the head node of a single linked list
 * @head: the start of the list
 *
 * Return: an integer
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (i);
}
