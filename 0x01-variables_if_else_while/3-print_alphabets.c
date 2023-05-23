#include <stdio.h>
/**
* main - prints the alphabet in lowercase,
* followed by uppercase character
* Return: always 0
*/
int main(void)
{
	char alpha, uppercase;

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
	putchar(alpha);
	}
	for (uppercase = 'A'; uppercase <= 'Z' ; uppercase++)
	{
	putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
