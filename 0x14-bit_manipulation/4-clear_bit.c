#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the index number of bit to be set
 * @index: index of bit ti be set
 *
 * Return: 1 if successful and -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
