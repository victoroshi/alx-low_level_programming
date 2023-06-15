#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: pointer to array
  *
  * Return: pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *n_str;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	size++;

	n_str = malloc(sizeof(*n_str) * size);

	if (n_str == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		n_str[i] = str[i];
	}
	return (n_str);
}

