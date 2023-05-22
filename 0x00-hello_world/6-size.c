#include<stdio.h>
#include<sys/utsname.h>
/**
* main - prints a text using printf function
* Return: always 0
*/
int main(void)
{
	struct utsname a;
	uname (&a);
	return (0);
}
