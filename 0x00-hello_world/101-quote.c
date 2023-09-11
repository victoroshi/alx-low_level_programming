#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: program that prints the size of various types of C
 * data type on the computer it is compiled and run on
 * Return: always 0 on success
 */
int main(void)
{
	char s[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, s, sizeof(s) - 1);
	return (1);
}

