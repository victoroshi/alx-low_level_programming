#include <stdio.h>
#include "main.h"

/**
* main - print string follow by new line
* @s: pointer to the string charcaters
* Return always 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
