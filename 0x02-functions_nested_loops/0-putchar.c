#include "main.h"
/**
* main - entry point
* Description: program that prints _putchar.
* followed by a new line.
* Return: Always (0)
*/
int main(void)
{
	char *t = "_putchar\n";

	while (*t)
	{
		_putchar(*t);
		t++;
	}
	return (0);
}
