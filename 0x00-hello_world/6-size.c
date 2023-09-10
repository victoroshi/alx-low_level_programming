#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the size of various types of C
 * data type on the computer it is compiled and run on
 * Return: always 0 on success
 */
int main(void)
{
	printf("The size of int is: %lu bytes\n", sizeof(int));
	printf("The size of char is: %lu bytes\n", sizeof(char));
	printf("The size of float is: %lu bytes\n", sizeof(float));
	printf("The size of long int is: %lu bytes\n", sizeof(long int));
	printf("The size of long long int is: %lu bytes\n", sizeof(long long int));
	return (0);
}

