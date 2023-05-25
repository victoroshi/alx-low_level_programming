#include "main.h"
#include "stdio.h"

/**
  * print_to_98 - print digit number from  0 t0 98
  * @n: this is the starting index
  * Return: Returns the numbers
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}

	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	printf("%d\n", n);
}
