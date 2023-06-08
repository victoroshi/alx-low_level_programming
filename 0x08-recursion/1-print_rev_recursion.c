#include "main.h"

/**
 * main - check the code
 * _print_rev_recursion - function to call that will 
 * print the string in a reverse format
 * @s: pointer to the value of s
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
