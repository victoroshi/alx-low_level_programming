#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destnation poiter to take value
 * @src: array poited that gets copied
 *
 * Description: copies string pointed to by src,
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
