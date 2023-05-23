#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: always 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a' ; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
