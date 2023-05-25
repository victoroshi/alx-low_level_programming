#include "main.h"

/**
* print_sign - function that prints the sign of a number01~
* @n: character to check
* Return: Returns 1 for n graeter than 0, -1 for less than 0
* and 0 when n =0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
