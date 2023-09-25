#include "main.h"

/**
 * print_triangle - draws a straight line in the terminal
 *
 * @size: variable used for the printing
 * Return: always 0
 */

void print_triangle(int size)
{
	int i, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i + 1; j--)
			{
				_putchar(' ');
			}

			for (j = i; j >= 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
