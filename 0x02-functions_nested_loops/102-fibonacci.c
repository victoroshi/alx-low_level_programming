#include <stdio.h>

/**
* main - main entry
* Description: program that computes and prints the sum of
* all the multiples of 3 or 5 below 1024
* Return: always (0)
*/

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int i = 3;
	int nextNum;

	printf("%d,  %d, ", n1, n2);
	while (i <= 20)
	{
		nextNum = n1 + n2;
		if (i == 20)
		{
			printf("%d", nextNum);
		}
		else
		{
			printf("%d, ", nextNum);
		}
		n1 = n2;
		n2 = nextNum;
		i++;
	}
	printf("\n");
	return (0);
}
