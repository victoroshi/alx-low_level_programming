#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: the start of a singly-linked listint list
 * @n: an integer that will be added
 *
 * Return: listint_t, pointer to the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL) /* increment head to 1 before NULL which is the last node before implementation */
			temp = temp->next;
		temp->next = new_node;          /* set the last node to point to new */
	}
	new_node->n = n;
	new_node->next = NULL;

	return (*head);
}
