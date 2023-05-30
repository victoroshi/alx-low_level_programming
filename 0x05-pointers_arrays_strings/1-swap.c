#include "main.h"
#include <stdio.h>

/**
* main - main fuction that check the code
*
* Return always 0;
*/
void swap_int(int *j, int *k)
{
	int swap = *k;
	*k = *j;
	*j = swap;
}
