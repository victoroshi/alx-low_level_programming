#include "lists.h"

/**
 * add_node - start a new node from the beginning of the list_t
 * @head: pointer
 * @str: string variable that will be duplicated during execution
 *
 * Return: pointer of the new node created and NULL when false
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_created_node;
	int len;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])
		len++;
	new_created_node = malloc(sizeof(list_t));

	if (new_created_node == NULL)
		return (NULL);

	new_created_node->str = strdup(str);
	new_created_node->len = len;
	new_created_node->next = *head;
	*head = new_created_node;

	return (new_created_node);
}
