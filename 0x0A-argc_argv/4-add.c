#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of positive intgers
 * @argc: count number of arguments passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code (0)
 */
int main(int argc, char **argv)
{
	int sum_num = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum_num += atoi(argv[i]);
	}
	printf("%d\n", sum_num);

	return (0);
}
