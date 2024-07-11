#include "main.h"

/**
 * _strlen_recursion - function name.
 * @s: string.
 *
 * Description: function that returns length of str
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen_recursion(s + len);
	}

	return (len);
}

/**
 * check_palindrome - function name.
 * @s: string
 * @len: length of string.
 * @index: The index of the str to be checked.
 *
 * Description: Checks if the string is a palindrome
 * Return: 1 if palindrome, otherwise 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - function name
 * @s: stirng
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
