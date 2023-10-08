#include <stdio.h>

/**
 * main - prints all arguments it receives per line and new line
 * @argc: count args that is passed
 * @argv: pointer to arguements
 * Return: exit code 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
