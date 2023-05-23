#include <stdio.h>

/**
* main - main block
* Description: program that prints all possible different
* combinations of two digits.
* Numbers must be separated by ,, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* Return: 0 Always
*/

int main(void)
{
	int i, j;
	/* Loop to iterate through all possible combinations */
	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != 8 || i != 9)
			{
				putchar('0' + i); /* print the first digit */
				putchar('0' + j); /* print the second digit */
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
