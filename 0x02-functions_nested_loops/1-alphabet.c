#include "main.h"

/**
* Description: a is a character data type
* Print_alphabet: prints lowercase alphabet.
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
