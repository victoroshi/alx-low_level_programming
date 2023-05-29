#include <stdio.h>
#include <stdlib.h>

/**
 * main - he main function of the program
 *
 * prints Fizz for multiples of 3
 * pritns Buzz for multiples of 5
 * prints FizzBuzz for multiples of 5 & 3
 *
 * Return: Always 0 ()success
 */
int main(void)
{
	int i;
	char j[] = "Fizz";
	char k[] = "Buzz";
	char l[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", k);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", l);
		else if (i % 3 == 0)
			printf("%s ", j);
		else if (i % 5 == 0)
			printf("%s ", k);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
