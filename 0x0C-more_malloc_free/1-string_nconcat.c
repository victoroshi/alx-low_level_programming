#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates of two strings
  * @s1: base string pointer
  * @s2: this point to the second string
  * @n: this represent the size bytes of s2
  *
  * Return: the concatinating strings
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght = n, i;
	char *concat_s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		lenght++;

	concat_s = malloc(sizeof(char) * (lenght + 1));
	if (concat_s == NULL)
		return (NULL);

	lenght = 0;
	for (i = 0; s1[i]; i++)
		concat_s[lenght++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat_s[lenght++] = s2[i];

	concat_s[lenght] = '\0';

	return (concat_s);
}
