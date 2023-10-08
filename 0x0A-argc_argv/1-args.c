#include <stdio.h>

/**
* main - prints the number of arguments passed to command line.
* @argc: number of arguments
* @argv: array containing the comman lines
*
* Return: Always success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

return (0);
}
