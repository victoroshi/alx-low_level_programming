#include "main.h"
#include <stdio.h>

/**
* main - main fuction that check the code
* @swap: swap the value of j with k
* @j pointer to the first variable
* @k pointer to the second variable
* Return always 0;
*/
void swap_int(int *j, int *k)
{
	int swap = *k;
	*k = *j;
	*j = swap;
}
