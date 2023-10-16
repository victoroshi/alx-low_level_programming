#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings and a new line
 * @separator: separator character to be used inbetween the strings
 * @n: num passed to the strings as input
 *
 * Return: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *current_string;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		current_string = va_arg(args, char *);
		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
