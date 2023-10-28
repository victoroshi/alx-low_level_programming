#include "main.h"

/**
 * flip_bits - set bits you would need to flip
 * to get from one number to another
 *
 * @n: base number
 * @m: number to flip with the base number
 *
 * Return: 1 if successgul and -1 if otherwise
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_int = n ^ m;
	int count = 0;

	while (xor_int)
	{
		count += xor_int & 1;
		xor_int >>= 1;
	}

	return (count);
}
