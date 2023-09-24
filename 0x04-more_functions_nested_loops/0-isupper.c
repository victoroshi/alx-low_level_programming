#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if character is an uppercase
 *
 * Description: a function that checks for uppercase character.
 * @c: alphabet character to be used in the test case
 * Return: (1) if c is uppercase, otherwise return (0)
 */
int _isupper(int c)
{
	if (isalpha(c) && isupper(c))
		return (1);
	else
		return (0);

}
