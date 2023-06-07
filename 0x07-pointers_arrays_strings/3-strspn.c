#include "main.h"

/**
 * _strspn - returns len prefix of the substring.
 * @s: this is the pointer to the string
 * @accept: bytes to lookupf or in the string s
 *
 * Return: occurences of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int match = 0;
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}
		if (match == 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
