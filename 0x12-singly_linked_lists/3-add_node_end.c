#include "lists.h"

/**
 * add_node_end - add a ned node to the end of the list
 * @head: pointer  to the initial node (first node in the list)
 * @str: pointer variable
 *
 * Return: new element created or NULL when this failed durig program execution
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_created_node;
	list_t *tmp;
	int i = 0, num_node = 0;

	new_created_node = malloc(sizeof(list_t));
	if (new_created_node == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		num_node++;

	new_created_node->len = i;
	new_created_node->str = strdup(str);
	new_created_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_created_node;
		return (new_created_node);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_created_node;

	return (new_created_node);
}
