#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}

}
