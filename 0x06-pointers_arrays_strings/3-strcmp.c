#include "main.h"

/**
  * _strcmp - this compares two strings
  * @s1: this is the base pointer of the string
  * @s2: this is the pointer to the second string
  *
  * Return: compare and return  -/+
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}

	return (s1[i] - s2[i]);
}
