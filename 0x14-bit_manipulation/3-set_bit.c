#include "main.h"

/**
* set_bit - sets the value of a bit to 1
* @n: pointer
* @index: the index number of teh bit to be set
* Return: 1 for success and -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(1 << index) * 8)
		return (-1);

	*n |= 1 << index;

	return (1);
}
