#include <stdio.h>

/**
* main - main entry
* Description: program that computes and prints the sum of
* all the multiples of 3 or 5 below 1024
* Return: always (0)
*/

int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long i = 3;
	unsigned long nextNum;

	printf("%lu, %lu, ", n1, n2);
	while (i <= 50)
	{
		nextNum = n1 + n2;
		if (i == 50)
		{
			printf("%lu", nextNum);
		}
		else
		{
			printf("%lu, ", nextNum);
		}
		n1 = n2;
		n2 = nextNum;
		i++;
	}
		printf("\n");
		return (0);
}
