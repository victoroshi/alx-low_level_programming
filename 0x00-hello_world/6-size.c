#include<stdio.h>
/**
* main - prints a text using printf function
* Return: always 0
*/
int main(void)
{
	printf("The size of char = %ld byte\n", sizeof(char));
	printf("The Size of int = %ld bytes\n", sizeof(int));
	printf("The Size of long int = %ld bytes\n", sizeof(long int));
	printf("The size of float = %ld bytes\n", sizeof(float));
	printf("The size of double = %ld bytes", sizeof(double));
	return (0);
}
