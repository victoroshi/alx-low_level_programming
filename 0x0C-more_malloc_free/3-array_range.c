#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first element in teh array
 * @max: the laxt element of array
 *
 * Return: pointer to the array; NULL if error occurred
 */
int *array_range(int min, int max)
{
	int *create_array;
	unsigned int i;

	if (min > max)
		return (NULL);
	create_array = malloc(sizeof(int) * (max - min + 1));
	if (create_array == 0)
		return (NULL);
	for (i = 0; min <= max; min++)
		create_array[i++] = min;
	return (create_array);
}
