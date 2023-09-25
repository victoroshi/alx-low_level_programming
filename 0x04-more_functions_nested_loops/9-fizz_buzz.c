#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the numbers from 1 to 100, followed
 * by a new line. But for multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz. For numbers
 * which are multiples of both three and five print FizzBuzz
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 5 != 0) && (i % 3 != 0))
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
