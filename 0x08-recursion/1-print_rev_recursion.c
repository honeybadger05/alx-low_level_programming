#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to print in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
