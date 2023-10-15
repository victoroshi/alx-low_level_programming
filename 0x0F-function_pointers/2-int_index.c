#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an array for a match
 * @array: this is an array
 * @size: array size
 * @cmp: pointer to the function used to compare
 *
 * Return: the first array element index cmp passes, or -1 on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size < 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 0)
			i++;
		else
			return (i);
	}
	return (-1);
}
