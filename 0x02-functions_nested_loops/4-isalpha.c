#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for letter, lowercase and uppercase
 * Description: function that checks for lowercase character.
 * @c : character to consider
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
