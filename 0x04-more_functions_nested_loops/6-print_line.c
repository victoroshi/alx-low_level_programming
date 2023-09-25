#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: integer used for input
 * Return: always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
