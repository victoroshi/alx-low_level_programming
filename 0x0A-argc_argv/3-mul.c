#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit  code 0
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
