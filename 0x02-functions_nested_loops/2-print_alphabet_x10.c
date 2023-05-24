#include "main.h"

/**
 * print_alphabet_10x - prints alphabet in 10 different times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	char j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
