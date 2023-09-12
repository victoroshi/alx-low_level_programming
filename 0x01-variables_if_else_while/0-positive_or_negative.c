#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * description: This program will assign a random number
 * to the variable n each time it is executed
 * Return: Always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive %d\n", n);
	}
	else if (n == 0)
	{
		printf("is zero %d\n", n);
	}
	else
	{
		printf("is negative %d\n", n);
	}
	return (0);
}
