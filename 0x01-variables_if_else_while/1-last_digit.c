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
	int last_D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_D = n % 10;
	if (last_D > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_D);
	}
	else if (last_D == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_D);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, last_D);
	}
	return (0);
}
