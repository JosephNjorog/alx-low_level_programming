#include "main.h"

/**
 * is_palindrome - checks if str is palindrome.
 * @s: string pointer.
 * Return: 1 if palindrome, 0 if not.
*/

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (palindrome_check(s, 0, length - 1));
}

/**
 * palindrome_check - looks for matching characters
 * @s: subjet string.
 * @start: starting index.
 * @end: last index.
 * Return: 1 if palindrome, 0 if not.
*/

int palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_check(s, start + 1, end - 1));
	}
}

/**
 * _strlen_recursion - finds string length
 * @s: string dubject.
 * Return: o if null else string length.
*/

int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (length + _strlen_recursion(s + 1));
	}
}
