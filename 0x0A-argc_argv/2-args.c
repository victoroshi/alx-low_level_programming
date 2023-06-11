#include <stdio.h>

/**
 * main - prints all arguments it receives per line, & \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, __attribute__((unused)) char* argv[])
{
    int count;
    for (count = 0; count < argc; count++)
    {
        printf("%s\n", argv[count]);
    }
    return 0;
}
