#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - this is the sum of 2 dimensional  matrix of integers
  * @a: the base string pointer
  * @size: size of the array
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, dim1 = 0, dim2 = 0;

	for (i = 0; i < size; i++)
	{
		dim1 += a[(size * i) + i];
		dim2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", dim1, dim2);
}
