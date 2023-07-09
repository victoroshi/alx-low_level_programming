#include "main.h"

/**
 * flip_bits - this will set the flip to be set
 * @n: the base number i.e the starting bit
 * @m: number to flip
 * Return: 1 on success and -1 on failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int int_xor = n ^ m;
	int bit_count = 0;

	while (int_xor)
	{
		bit_count += int_xor & 1;
		int_xor >>= 1;
	}

	return (bit_count);
}
