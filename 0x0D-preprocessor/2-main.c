#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints current filename used for compilation
 * Return: always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
