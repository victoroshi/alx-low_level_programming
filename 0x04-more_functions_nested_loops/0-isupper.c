#include "main.h"

/**
 * _isupper - perform a check if  character  is an uppercase
 * @c: varaible to perform the comparison
 * Return: 1 if c is uppercase, and 0  if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
