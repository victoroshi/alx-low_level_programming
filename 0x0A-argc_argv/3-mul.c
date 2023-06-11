#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives per line, & \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 1 for error and 0 for success
 */
int main(int argc, char **argv)
{
    int i, j;

    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
return (0);
}
