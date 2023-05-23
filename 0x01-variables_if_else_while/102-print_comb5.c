#include <stdio.h>

/**
* main - main block
* Description: program that prints all possible different
* combinations of two two digit numbers.
* All numbers should be printed with two digits.
* 1 should be printed as 01
* The numbers should be separated by a space
* The combinations of numbers should be
* printed in ascending order
* 00 01 and 01 00 are considered as the same
* combination of the numbers 0 and 1
* You can only use putchar eight times maximum in your code
* You are not allowed to use any variable of type char
* Return: 0 Always
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
