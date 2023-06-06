#include "main.h"

/**
 * _memcpy - copies each byte to location in the dest memory area
 * @dest: pointer to destination array
 * @src: char pointer to source string  to be copied
 * @n: max size of char str
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
