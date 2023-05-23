#include <stdio.h>
/**
* main - program that prints all possible 
* combinations of single-digit numbers.
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(i % 10 + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
