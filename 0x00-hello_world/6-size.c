#include <limits.h>
#include<stdio.h>
/**
* main - prints a text using printf function
* Return: always 0
*/
int main(void)
{
	printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
	return (0);
}
