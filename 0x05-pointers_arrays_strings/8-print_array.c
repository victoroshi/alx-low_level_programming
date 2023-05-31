#include <stdio.h>
#include "main.h"

/**
* main - checking the main function
* print_array - array to be check for iteration
* @a: this is the pointer to the array
* @n: the numbers of teh array that will be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
