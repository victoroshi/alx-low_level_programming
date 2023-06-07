#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates the occurrence of substring in a string
 * @haystack: this is the base string pointer
 * @needle: this is the pointer to the charater of substring
 *
 * Return: pointer to located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
