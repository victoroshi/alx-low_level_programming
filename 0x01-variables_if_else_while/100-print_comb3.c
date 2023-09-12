#include <stdio.h>

/**
 * main - entry point
 * description: prints all possible different combinations of two digits
 *
 * Return: always (0)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
		putchar((char)i);
		putchar((char)j);
		if (i != 56 || j != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	}
	return (0);
}
