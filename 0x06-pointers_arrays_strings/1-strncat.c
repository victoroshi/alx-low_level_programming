#include "main.h"

/**
  * _strncat - concatenates strings
  * @dest: pointer to destination str
  * @src: pointer to source str
  * @n: from stdin
  *
  * Return: (str) dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
