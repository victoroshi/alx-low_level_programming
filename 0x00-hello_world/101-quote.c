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
	char myString[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";	
	write(STDOUT_FILENO, myString, sizeof(myString) - 1);
	return (1);
}

