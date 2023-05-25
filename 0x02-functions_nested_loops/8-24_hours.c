#include "main.h"

/**
 * jack_bauer - print hours and minutes
 * Return: the return value is NULL
 */
void jack_bauer(void)
{
	int hr = 0;

	for (hr < 24; hr++)
	{
		int min = 0;

		for (min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
