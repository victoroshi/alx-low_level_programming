#include "main.h"

/**
 * check_input - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int check_input(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check_input(n + 1, base));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: integer number
 *
 * Return: integer -1 if prime or negative, 0 if 0, otherwise the square root
 *
 */
int _sqrt_recursion(int n)
{
	return (check_input(1, n));
}
