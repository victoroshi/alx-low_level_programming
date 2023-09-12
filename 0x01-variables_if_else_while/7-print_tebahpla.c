#include <stdio.h>

/**
 * main - entry point
 * description: program that prints lowercase in reverse order.
 *
 * Return: always (0)
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
