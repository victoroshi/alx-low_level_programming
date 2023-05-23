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

int main()
{
	int i, j;
	/* Loop to iterate through all possible combinations */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j) /* Exclude any combinations with the same digit */
			{
				putchar(i + '0'); /* print the first digit */
				putchar(j + '0'); /* print the second digit */
			}
		}
	}
	return (0);
}
