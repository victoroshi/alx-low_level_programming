#include <stdlib.h>
#include "main.h"
/**
 * create_array - enntry point
 * @size: the size of the input
 * @c: string of characters
 * Return: (0)
 */
char *create_array(unsigned int size, char c)
{
	char *array_string;
	unsigned int i;

	array_string = malloc(sizeof(char) * size);

	if (size == 0 || array_string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_string[i] = c;
	return (array_string);
}
