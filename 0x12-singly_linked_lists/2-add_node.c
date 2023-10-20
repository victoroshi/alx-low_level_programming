#include "lists.h"

/**
 * add_node - add new node at the beginning of a list_t list
 * @head: pointer to the head
 * @str: string that will be duplicated
 *
 * Return: pointer to new node, and return WALL when it is false
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lenght;

	if (str == NULL)
		return (NULL);

	lenght = 0;

	while (str[lenght])
		lenght++;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->lenght = lenght;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
