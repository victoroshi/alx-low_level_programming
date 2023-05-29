#include "main.h"

/**
 * print_diagonal - program that print diagonal line
 * _putchar
 * @n: this indicate the numbers of  char '\' that will be printed.
 * Return ;void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
