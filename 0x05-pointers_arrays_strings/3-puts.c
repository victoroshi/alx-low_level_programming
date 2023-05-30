#include "main.h"

/**
  * _puts - _put srings of character into thestdout
  *
  * @str: the pointer  to the string we intend to print
  *
  * Return: Nothing is  expected
  */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
