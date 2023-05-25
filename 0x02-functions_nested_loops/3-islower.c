#include "main.h"

/**
* c: take c as an integer value
* print _islower : check for lowercase character
* Description: Write a function that checks for lowercase character
* Return always 0
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
