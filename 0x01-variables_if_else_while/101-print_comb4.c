#include <stdio.h>

/**
 * main - entry point
 * description: prints all possible different combinations of three digits
 *
 * Return: always (0)
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
		{
		putchar((char)i);
		putchar((char)j);
		putchar((char)k);
		if (i != 55 || j != 56 || k != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	}
	}
	return (0);
}
