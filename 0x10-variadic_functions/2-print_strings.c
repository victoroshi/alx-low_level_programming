#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *current_str;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		current_str = va_arg(args, char *);
		if (current_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
