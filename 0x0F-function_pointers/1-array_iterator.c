#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function
  * given as a parameter on each element of an array
  *
  * @size: array size
  * @action: pointer to the function to use
  * @array: integer array to iterate on
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
