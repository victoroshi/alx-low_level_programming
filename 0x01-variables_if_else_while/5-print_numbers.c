#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
