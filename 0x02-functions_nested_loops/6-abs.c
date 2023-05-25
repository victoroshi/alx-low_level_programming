#include "main.h"

/**
 * _abs - print ansolute value of an integer
 * @x: integer to check
 * Return: Returns teh value of x based on condition of output
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
