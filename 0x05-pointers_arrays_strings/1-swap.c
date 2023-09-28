#include <stdio.h>


/**
 * swap_int - function that perform the swap
 *
 * @a: integer variable
 * @b: integer variable
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
