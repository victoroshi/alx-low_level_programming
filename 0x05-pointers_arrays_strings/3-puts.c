#include "main.h"


/**
 * _puts - print string follow by a new lien
 *
 * @str: array of characters
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
