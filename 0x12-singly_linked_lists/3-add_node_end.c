nclude "lists.h"

/**
 * add_node_end - adds new_node to end of a list
 * @head: pointer to the first node
 * @str: pointer to string
 *
 * Return: The address of new created  element, OR NULL when it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tp;
	int i = 0, node_count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		node_count++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tp = *head;

	while (tp->next != NULL)
		tp = tp->next;

	tp->next = new_node;

	return (new_node);
}
