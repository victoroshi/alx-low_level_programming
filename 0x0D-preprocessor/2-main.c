#include <stdio.h>

/**
 * main - print file name it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
