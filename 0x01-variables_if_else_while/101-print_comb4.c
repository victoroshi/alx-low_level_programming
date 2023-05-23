#include <stdio.h>

/**
* main - main block
* Description: program that prints all possible different
* combinations of three digits.
* Numbers must be separated by , followed by a space
* The three digits must be different
* 012, 120, 102, 021, 210 are considered the same combination
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* Return: 0 Always
*/

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
