#include <stdio.h>
#include <string.h>

/**
 * int _strlen - function that find the lenght of string
 *
 * @s: the string to find the lenght
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
