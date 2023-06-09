#include "main.h"

/**
  * _compute_sqrt - get square roots and perfect squares by j
  * @j: random picker of square roots
  * @i: base number
  *
  * Return: returns square root
  */
int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}
