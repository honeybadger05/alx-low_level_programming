#include "main.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
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
