#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: an integer variable
 * @index: this is the index, starting from 0 at the beginning of the bit
 *
 * Return: value of the bit at index position or -1 if their is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
