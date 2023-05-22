#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
* main - program will assign a random number
* to the variable n each time it is executed
* Return: always 0
*/
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n %  10;
	printf("Last digit of %d is %d ", n, m);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
