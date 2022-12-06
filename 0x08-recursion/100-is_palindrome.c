#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string to be printed
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}


/**
 * check_palindrome - check if a string is a palindrome
 * @s: the string to be checked
 * @len: length of the string
 * Return: result
 */

int check_palindrome(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (check_palindrome(s + 1, len - 2));
}


/**
 * is_palindrome - function returns 1 if string is a palindrome and 0 if not.
 * @s: string to be checked
 * Return: result
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (check_palindrome(s, len));
}
