#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print's a name
 * @name: name character to be printer
 * @f: function pointer which takes string of characters
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
