#include "main.h"

/**
  * _compute_sqrt - get square roots and perfect squares by j
  * @j: random picker of square roots
  * @i: base number
  *
  * Return: returns square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt2(1, n));
}
/**
 *_sqrt2 - find square of numbers
 *@a: an integer variable
 *@b: an integer variable
 *Return: value square
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
