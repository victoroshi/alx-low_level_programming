#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @head: head pointer
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
