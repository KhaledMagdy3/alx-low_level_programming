#include <stdio.h>
#include "main.h"

/**
 * st_lengh - function length
 *
 * @s: char
 *
 * Return: int
 */

int st_lengh(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + st_lengh(s));
	}
	return (0);
}

/**
 * is_palindrome_help - function that returns 1 if a string is a palindrome
 *
 * @s: char
 * @start: int
 * @end: int
 *
 * Return: int
 */

int is_palindrome_help(char *s, int start, int end)
{
	if (s[start] != s[end])
	{
		return (0);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_help(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 * @s: char
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int l = st_lengh(s);

	return (is_palindrome_help(s, 0, l - 1));
}
