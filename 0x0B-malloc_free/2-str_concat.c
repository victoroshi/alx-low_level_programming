#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenate two string
  * @s1: pointer to base string
  * @s2: pointer to second string
  *
  * Return: pointer to new string
  */
char *str_concat(char *s1, char *s2)
{
	int lenght_s1 = 0, lenght_s2 = 0, concat_lenght, j, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenght_s1] != '\0')
		lenght_s1++;

	while (s2[lenght_s2] != '\0')
		lenght_s2++;
	lenght_s2++;

	concat_lenght = lenght_s1 + lenght_s2;
	concat_str = malloc(sizeof(char) * concat_lenght);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < lenght_s1; i++)
		concat_str[i] = s1[i];

	for (j = 0; i <= concat_lenght; i++, j++)
		concat_str[i] = s2[j];

	return (concat_str);
}
