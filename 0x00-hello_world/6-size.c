#include<stdio.h>
/**
* main - prints a text using printf function
* Return: always 0
*/
int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of a int: %ld bytes\n", sizeof(int));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of long long int: %ld bytes\n", sizeof(long long));
	printf("The size of float = %ld bytes", sizeof(float));
	return (0);
}
