#include "main.h"

/**
  * times_table - print 9-table
  * Return: Returns nulll
  */
void times_table(void)
{
	int i, j, tb;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			ret = (i * j);
			if ((tb / 10) > 0)
			{
				_putchar((tb / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((ret % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
