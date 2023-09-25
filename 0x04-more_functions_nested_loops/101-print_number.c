#include "main.h"

/**
  * print_number - prints number past to the argumant
  * @n: integer to print
  */
void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');

}
