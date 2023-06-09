#include "main.h"

/**
  * _strcat - the function that concatenate strings
  * @dest: this point to the destination memory
  * @src: pointer to source string
  *
  * Return: dest (str)
  */
char *_strcat(char *dest, char *src)
{
	char *end_str = dest;
	while (*end_str != '\0')
	{
		end_str++;
	}
	while (*src != '\0')
	{
		*end_str = *src;
		src++;
		end_str++;
	}
	*end_str = '\0';
	return (dest);
}
