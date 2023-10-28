#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 if big it is endian, 1 if endian is little
 */
int get_endianness(void)
{
	char uint_endiannes;
	char *ptr;

	uint_endiannes = 1;
	ptr = &uint_endiannes;

	/* Little Endian */
	if (*ptr != 0)
	{
		return (1);
	}
	return (0);
}
