#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - adds two integers and returns the result1~
 * Description:  a function that prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: integer variable
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (; n < 98; n++)
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
