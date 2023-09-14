#include "main.h"

/**
 * _islower - check for lower case character
 * Description: function that checks for lowercase character.
 * @c : character to consider
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
