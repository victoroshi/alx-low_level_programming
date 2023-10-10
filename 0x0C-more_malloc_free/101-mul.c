#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  * is_number - checkf for integer number
  * @s: pointer to args array
  *
  * Return: 0 on success, 1 on error
  */
int is_number(char *s)
{
	int i = 0, len = strlen(s);

	for (; i < len; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
  * mul - multiply the 2 numbers
  * @num1: the first character
  * @num2: teh second character
  *
  * Return: multiplication
  */
int mul(char *num1, char *num2)
{
	return (atoll(num1) * atoll(num2));
}

/**
  * main - test the mult f(n)
  * @argc: arguments counter
  * @argv: pointer to args array
  *
  * Return: 0 on success
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", mul(argv[1], argv[2]));

	return (0);
}
