#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: head of list
 * @index: index of nth node
 *
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	temp = head;
	while (n < index && temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	if (n != index)
		return (NULL);

	return (temp);
}
