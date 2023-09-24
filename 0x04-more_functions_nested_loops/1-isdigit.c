#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check if character is digit or not
 *
 * Description: a function that checks for a digit (0 through 9)
 * @c: alphabet character to be used in the test case
 * Return: (1) if c is digit, otherwise return (0)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
