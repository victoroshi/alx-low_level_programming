#include "main.h"
#include <stdio.h>
/**
  * _sqrt_recursion - get square roots
  * @n: an integer value
  *
  * Return: returns square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt2(1, n));
}
/**
 *_sqrt2 - find the square of given number
 *@a: an integer variable
 *@b: an integer variable
 *Return: square root
 */
int _sqrt2(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (_sqrt2(a += 1, b));
}
