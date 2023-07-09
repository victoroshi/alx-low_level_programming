#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 based on the index number.
* @n: this point to the target index
* @index: index of teh bit that will be reset
* Return: 1 on SUCCESS abdn -1 on FAILURE
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
