#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - using malloc to allocate memmory
  * @b: number of memory to be allocated
  *
  * Return: the pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

