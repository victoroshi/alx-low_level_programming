#include "main.h"
/**
* main - entry point
* Description: program that prints lowercase alphabet.
* followed by a new line.
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
	return (0);
}
