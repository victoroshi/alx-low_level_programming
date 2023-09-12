#include <stdio.h>

/**
 * main - entry point
 * description: program that prints digit number from 0 through 9.
 *
 * Return: always (0)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
