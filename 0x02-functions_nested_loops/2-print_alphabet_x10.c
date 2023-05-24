#include "main.h"

/**
 * print_alphabet_10x - print_alphabet_x10s 10 times
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
			_putchar(k);
		}
		_putchar('\n');
	}
}
