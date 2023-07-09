#include "main.h"

/**
* binary_to_uint - convertion of binary to its integer equivalent
* @b: pointer  to the character to be converted.
* Return: the converted string or 0 when failed
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert_bin = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		convert_bin = (convert_bin << 1) | (*b - '0');
		b++;
	}

	return (convert_bin);
}
