#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		/*convert to base of 16*/
		putchar(num < 10 ? num + '0' : num - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
