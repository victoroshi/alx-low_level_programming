#include "main.h"
/**
* main - entry point
* Description: program that prints _putchar.
* followed by a new line.
* Return: Always (0)
*/
int main(void)
{
	char t[] = '_putchar';
	int c;
	for (c = 0; c < 9; c++)
	{ 
		_putchar(t[c]);
	}
	_putchar('\n');
	return (0);
}
