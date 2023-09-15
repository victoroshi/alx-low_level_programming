#include "main.h"

/**
 * _abs - check for letter, lowercase and uppercase
 * Description: function that computes the absolute value of an integer.
 * @n: integer variable
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
