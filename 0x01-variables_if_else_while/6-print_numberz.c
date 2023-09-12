#include <stdio.h>

/**
 * main - entry point
 * description: program that prints number 0 through 9.
 *
 * Return: always (0)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
