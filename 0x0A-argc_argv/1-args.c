#include <stdio.h>

/**
 * main - prints the count of args passed, followed by new line
 * @argc: the count for args
 * @argv: pointer to the string array pointing to elements
 * Return: exit code 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);
	return (0);
}
