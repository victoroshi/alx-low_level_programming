#include <stdio.h>

/**
 * main - prints all arguments it receives per line
 * @argc: count no of args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, char *argv[])
{
	int countt;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
