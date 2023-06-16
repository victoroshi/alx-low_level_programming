#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers.
  * @min: minumum integer
  * @max: maximum integer
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i = 0, *arr_ints, size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr_ints = malloc(sizeof(*arr_ints) * size);
	if (arr_ints == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		arr_ints[i] = min + i;
	}
	return (arr_ints);
}
