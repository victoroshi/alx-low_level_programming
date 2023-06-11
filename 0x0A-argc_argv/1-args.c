#include <stdio.h>

/**
 * main - prints the count of args passed, followed by \n
 * @argc: the count for the argument
 * @argv: pointer to the array element
 * Return: exit code 0
 */
int main(int argc, __attribute__((unused)) char* argv[])
{
    printf("%d\n", argc -1);
    return 0;
}
