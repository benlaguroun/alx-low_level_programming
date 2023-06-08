#include "main.h"

int is_palindrome(char *s, int start, int end);

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return is_palindrome(s, 0, len - 1);
}

/**
 * is_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	if (s[start] != s[end])
		return 0;
	return is_palindrome(s, start + 1, end - 1);
}
