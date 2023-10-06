#include <stdlib.h>

/**
 * _strdup - return pointer to any given string of characters
 * @str: this is the string to be duplicated
 *
 * Return: The pointer to the new string or NULL when it failed to create a memory
 */
char *_strdup(char *str)
{
	char *str_pointer;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	str_pointer = malloc(len * sizeof(*str));
	if (str_pointer == NULL)
		return (NULL);
	while (i <= len)
	{
		str_pointer[i] = str[i];
		i++;
	}
	return (str_pointer);
}
