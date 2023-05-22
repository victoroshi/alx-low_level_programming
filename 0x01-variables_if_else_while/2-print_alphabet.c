#include <stdio.h>
/**
* main - program will assign a random number
* to the variable n each time it is executed
* Return: always 0
*/
int main(void)
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z' ; alpha++)
    {
        // print the value of the variable 
        putchar(alpha);

    }

    putchar('\n');
    return (0);
}
