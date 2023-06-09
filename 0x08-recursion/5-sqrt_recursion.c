#include "main.h"

/**
  * _compute_sqrt - get square roots and perfect squares by j
  * @j: random picker of square roots
  * @i: base number
  *
  * Return: returns square root
  */
int _sqrt_recursion(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(i, j + 1));
	}
}

