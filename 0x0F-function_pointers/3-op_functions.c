#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - add two ints
  * @a: first int
  * @b: second int
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - diff of two integers
  * @a: first int
  * @b: second int
  *
  * Return: effective diff
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two integers
  * @a: first int
  * @b: second int
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a/b
  * @a: first arg
  * @b: second arg
  *
  * Return: div
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - get modulus
  * @a: first int
  * @b: second int
  *
  * Return: a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
