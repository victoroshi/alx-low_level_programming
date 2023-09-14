#include "main.h"
#include <ctype.h>

/**
 * print_sign - checks for lowercase character.
 * @n : character to consider
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
