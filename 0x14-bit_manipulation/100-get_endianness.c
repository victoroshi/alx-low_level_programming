#include "main.h"

/**
* get_endianness - checks the endiannes
* Return: 0 for big and 1 if endian s little.
*/
int get_endianness(void)
{
	char endiannes;
	char *ptr;

	endiannes = 1;
	ptr = &endiannes;

	/* Little Endian */
	if (*ptr != 0)
	{
		return (1);
	}
	return (0);
}
