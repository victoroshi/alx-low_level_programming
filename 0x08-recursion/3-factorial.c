#include "main.h"

/**
 * factorial - print factorial of number
 *
 * @n: integer number
 *
 * Return: always 0
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
