#include "main.h"

/**
* c is the character used for comparison
* _islower : is the main fuction
* Description: Write a function that checks for lowercase character
* Return: 1 for true and 0 for false
*/
int _islower(int c) /* the main function  declaring c as an integer*/
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
