#include "main.h"

/**
  * print_rev - reverse string of characters
  *
  * @s: string pointer to be reversed
  *
  * Return: void
  */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;


	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
