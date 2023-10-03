#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 * @s: stringsof characters to be printed in reverse order
 *
 * Return: Void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
