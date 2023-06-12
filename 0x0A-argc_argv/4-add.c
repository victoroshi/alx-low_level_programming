#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds adds positive numbers
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, numbers;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		numbers = numbers + atoi(argv[i]);
	}
	printf("%i\n", numbers);
	return (0);
}
