#include "main.h"

int _compute_sqrt(int i, int j);

/**
  * _compute_sqrt - get square roots and perfect squares by j
  * @j: random picker of square roots
  * @i: base number
  *
  * Return: returns square root
  */
int _compute_sqrt(int i, int j)
{
	if (guess * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	else
	{
		return (_compute_sqrt(i, j + 1));
	}
}

/**
  * _sqrt_recursion - determine square roots of number
  * @n: this is the base number
  *
  * Return: returns the square root
  */
int _sqrt_recursion(int n)
{
	return (_compute_sqrt(n, 1));
}
