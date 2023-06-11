#include <stdio.h>

/**
* main - print name follow by a new line
* @argc: counter for the argument
* @argv: pointer to the string in an array
* Return: exit code 0
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
