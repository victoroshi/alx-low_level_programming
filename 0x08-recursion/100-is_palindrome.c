#include <stdio.h>
#include "main.h"
/**
 * _strlen_using_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_using_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_using_recursion(s));
	}
	return (0);
}
/**
 * checker - helper function for is_palindrome
 * @str: string tobe checked
 * @len: length of strings of characters
 * @count: counter
 * Return: 1 if palindrome, 0 otherwise
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: always the string to check
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_using_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
