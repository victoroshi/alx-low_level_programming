#include "main.h"

/**
 * _strchr - function to locates a character in a string
 * @s: this is the base string pointer
 * @c: this is the look up char
 *
 * Return: pointer to s on success or null on error
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
