#include <stdio.h>

/**
* main - main entry
* Description: program that computes and prints the sum of
* all the multiples of 3 or 5 below 1024
* Return: always (0)
*/

int main(void)
{
	int sum = 0;
	int n1 = 1;
	int n2 = 2;
	/*unsigned long i = 3; */
	int tmp;

	while (n2 <= 4000000)
	{
		if (n2 % 2 == 0)
		{
			sum += n2;
		}
		tmp = n2;
		n1= n2;
		n2 = tmp + n1;
	}
		printf("%d\n", sum);
		return (0);
}
