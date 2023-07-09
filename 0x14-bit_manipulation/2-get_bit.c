#include "main.h"

/**
* get_bit - get bit at an index number
* @n: int variable
* @index: index starting from 0 to the target bit
* Return: value the value of the bit or -1 when it failed
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
