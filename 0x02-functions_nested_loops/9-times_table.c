#include "main.h"

/**
 * times_table - print last digit
 * Description: function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, multiplier;

	for (i = 0; i <= 9; i++)
	{

		_putchar(48);
		for (j = 1; j <= 9; j++)
	{
			multiplier = i * j;
			_putchar(44);
			_putchar(32);
			if (multiplier <= 9)
			{
				_putchar(32);
				_putchar(multiplier + 48);															}
			else
			{
				_putchar((multiplier / 10) + 48);
				_putchar((multiplier % 10) + 48);
			}
	}
	_putchar('\n');

	}
}
