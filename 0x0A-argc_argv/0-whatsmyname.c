#include <stdio.h>

/**
 * main - entry point
 * prints its name, followed by a new line
 * @argc: count the args passed to the function
 * @argv: pointer to string array
 * Return: exit 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
