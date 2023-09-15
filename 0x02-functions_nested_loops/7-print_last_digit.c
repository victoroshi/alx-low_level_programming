#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print last digit
 * Description: function that prints the last digit of a number.
 * @n: integer variable
 * Return: Always 0
 */
int print_last_digit(int n)
{

	n = abs(n) % 10;
	return (n);

}
