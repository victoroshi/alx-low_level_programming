#include "main.h"

/**
  * _isalpha - check for alphabetic char
  * @c: character that will be checked
  *
  * Return: Returns 1 when the check is true and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
