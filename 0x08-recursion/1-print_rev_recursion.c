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
    int i;

    for (i = 0; s[i]; i++)
    {
        continue;
    }
    for (; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}

