#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the size of various types of C
 * data type on the computer it is compiled and run on
 * Return: always 0 on success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int:  %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

