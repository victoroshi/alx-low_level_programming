#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory by using malloc.
*
* @b: this is an unsigned integer argument
*
* Return:  pointer to the allocated memory, or 98 if it fails.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
