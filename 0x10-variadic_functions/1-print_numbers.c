#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers as passed, followed by a new line.
 * @separator: string used to separate teh numbers
 * @n: number passed to the function
 *
 * Return: args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", num);
	}

	va_end(args);
	printf("\n");
}
