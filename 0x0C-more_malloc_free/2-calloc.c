#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates initialized memory with nmemb elements.
 * @nmemb: the number of array elements
 * @size: size in bytes of array element
 *
 * Return: pointer to the array; 0 if error occurred
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s, *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == 0)
		return (NULL);
	ptr = s;
	for (i = 0; i < nmemb * size; i++)
		*ptr++ = 0;
	return (s);
}
