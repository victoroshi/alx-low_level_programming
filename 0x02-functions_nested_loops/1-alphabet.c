#include "main.h"

/**
* Description: Program to print lowercase alphabet and new line
* print_alphabet: prints lowercase alphabet.
* Return: Always (0)
*/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
