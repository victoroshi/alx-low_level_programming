#include <stdio.h>

/**
 * main - entry point
 * description: program that prints the alphabet in lowercase.
 *
 * Return: always (0)
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
		putchar(alphabets);
		}
	}
	putchar('\n');
	return (0);
}
