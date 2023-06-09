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
		return (_compute_sqrt(i, j + 1));
	}
}

