#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: this is an unsigned long integer
 */
void print_binary(unsigned long int n)
{
	unsigned int value;

	value = n & 1;
	n = n >> 1;
	if (n > 0)
		print_binary(n);
	_putchar(value + '0');
}
