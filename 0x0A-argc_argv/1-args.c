#include <stdio.h>

/**
 * main - prints the count of args passed, followed by new line
 * @argc: the count for args
 * @argv: pointer to the array element
 * Return: exit code 0
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc -1);
    return (0);
}
