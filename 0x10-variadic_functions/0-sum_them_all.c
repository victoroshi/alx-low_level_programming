#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add up arguments
 * @n: this is the number of argumebt after constant
 
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int addition = 0;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
		addition += va_arg(lst, int);
	va_end(lst);

	return (addition);
}
