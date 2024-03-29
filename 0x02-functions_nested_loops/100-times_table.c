#include "main.h"

/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int mul = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (mul <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mul);
				} else if (mul > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul / 10) % 10));
					_putchar('0' + (mul % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mul / 10));
					_putchar('0' + (mul % 10));
				}
			}
			_putchar('\n');
		}
	}
}
