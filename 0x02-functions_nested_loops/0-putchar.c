#include "main.h"

/**
 * main - entry point
 * description: program that prints _putchar, followed by a new line
 *
 * Return: Always (0)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);

}
