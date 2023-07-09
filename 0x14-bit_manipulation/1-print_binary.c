#include "main.h"

/**
* print_binary - output the binary representation of a base 10 number
* @n: int to the standard output
* Return: the converted number in binary equivqlent
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
