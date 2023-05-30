#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the  values of two int pointer variables
* @j: pointer to tehe first variable
* @k: pointer to the second variable
*
* Return: void
*/
void swap_int(int *j, int *k)
{
	int swap = *k;
	*k = *j;
	*j = swap;
}
