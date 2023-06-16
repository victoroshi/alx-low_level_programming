#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _calloc -  allocates memory for an array, using malloc
  * @nmemb: bytes of the allocation
  * @size: array size
  *
  * Return: the pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
