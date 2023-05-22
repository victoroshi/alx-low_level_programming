#include<stdio.h>
/**
* main - prints a text using printf function
* Return: always 0
*/
int main(void)
{
	printf("The size of Int = %2d bytes \n", sizeof(short int));
  	printf("The size of Long = %2d bytes \n", sizeof(long int));
  	printf("The size of Float = %2d bytes \n", sizeof(float));
  	printf("The size of Double = %2d bytes \n", sizeof(double));
  	printf("The size of Long Double = %2d bytes \n", sizeof(long double));
  	printf("The size of Char = %2d bytes \n", sizeof(char));
	return (0);
}
